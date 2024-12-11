#include <stdio.h>


int *GetSet(int *num) {
    // ขอให้ผู้ใช้กรอกจำนวนสมาชิกในเซต
    printf("Enter the number of elements in the set: ");
    scanf("%d", num);  // รับจำนวนสมาชิก

    // จองหน่วยความจำสำหรับอาเรย์
    int *data = (int *)malloc(*num * sizeof(int));
    if (data == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);  // หากการจองหน่วยความจำล้มเหลว
    }

    // ขอให้ผู้ใช้กรอกค่าของสมาชิก
    printf("Enter the elements of the set:\n");
    for (int i = 0; i < *num; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &data[i]);  // รับค่าของสมาชิก
    }

    return data;  // ส่งกลับพอยน์เตอร์ที่ชี้ไปยังอาเรย์
}

int main() {
    int *data, num;
    data = GetSet(&num);  // เรียกใช้งานฟังก์ชัน GetSet

    // แสดงผลสมาชิกที่ได้รับจากผู้ใช้
    printf("\nThe elements in the set are:\n");
    for (int i = 0; i < num; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    // ปล่อยหน่วยความจำที่จองไว้
    free(data); 

    return 0;
} //end function
