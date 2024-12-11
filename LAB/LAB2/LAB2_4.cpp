#include <stdio.h>
#include <string.h>

void explode(char str1[], char splitters[], char str2[][10], int *count) {
    int i = 0, j = 0;
    int len = strlen(str1);
    char temp[10];
    int temp_index = 0;

    // วนลูปผ่านทุกอักขระใน str1
    for (int k = 0; k < len; k++) {
        // ตรวจสอบว่าอักขระปัจจุบันเป็นตัวแบ่งที่อยู่ใน splitters[]
        if (strchr(splitters, str1[k]) != NULL || isspace(str1[k])) {
            // ถ้า temp[] มีข้อมูล (หมายความว่าเจอคำใหม่)
            if (temp_index > 0) {
                temp[temp_index] = '\0';  // สิ้นสุดสตริงใน temp
                strcpy(str2[i], temp);  // เก็บใน str2
                i++;
                temp_index = 0;  // รีเซ็ตตัวแปร temp_index
            }
        } else {
            // ถ้าไม่เจอตัวแบ่ง ให้นำอักขระมาบันทึกใน temp[]
            temp[temp_index++] = str1[k];
        }
    }

    // ถ้า temp[] มีข้อมูลหลังจากลูป (กรณีที่ไม่มีตัวแบ่งสุดท้าย)
    if (temp_index > 0) {
        temp[temp_index] = '\0';
        strcpy(str2[i], temp);
        i++;
    }

    *count = i;  // เก็บจำนวนคำที่แยกได้ใน count
}

int main() {
    char str1[] = "I,Love World/You";
    char splitters[] = ", /";  // ตัวแบ่งเป็นเครื่องหมายคอมม่า, ช่องว่าง, และสแลช
    char str2[20][10];  // อาร์เรย์สำหรับเก็บผลลัพธ์
    int count = 0;  // จำนวนคำที่แยกได้

    explode(str1, splitters, str2, &count);

    // แสดงผลลัพธ์
    printf("Number of parts: %d\n", count);
    for (int i = 0; i < count; i++) {
        printf("str2[%d] = %s\n", i, str2[i]);
    }

    return 0;
}
