#include <stdio.h>
#include <string.h>  // สำหรับ strtok()

void explode(char str1[], char splitter, char str2[][10], int *count) {
    int i = 0;
    char *token;

    // ใช้ strtok() เพื่อแยกข้อความจาก str1 ตามตัวแบ่ง splitter
    token = strtok(str1, &splitter);  // แยกข้อความแรก

    while (token != NULL) {
        strcpy(str2[i], token);  // เก็บข้อความที่แยกได้ใน str2[i]
        i++;  // เพิ่มดัชนี
        token = strtok(NULL, &splitter);  // แยกข้อความถัดไป
    }

    *count = i;  // เก็บจำนวนข้อความที่แยกได้ใน count
}

int main() {
    char out[20][10];  // อาเรย์สำหรับเก็บข้อความที่แยก
    int num;  // ตัวแปรสำหรับเก็บจำนวนข้อความที่แยกได้

    // เรียกใช้ฟังก์ชัน explode()
    explode("I/Love/You", '/', out, &num);

    // แสดงผลลัพธ์
    printf("Number of parts: %d\n", num);
    for (int i = 0; i < num; i++) {
        printf("str2[%d] = %s\n", i, out[i]);
    }

    return 0;
} //end function
