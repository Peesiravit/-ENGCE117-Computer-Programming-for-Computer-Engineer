#include <stdio.h>

int GetSet(int data[]) {
    int num;

    // ขอให้ผู้ใช้กรอกจำนวนสมาชิกในเซต
    printf("Enter the number of elements in the set: ");
    scanf("%d", &num);  // รับจำนวนสมาชิก

    // ขอให้ผู้ใช้กรอกค่าของสมาชิกในเซต
    printf("Enter the elements of the set:\n");
    for (int i = 0; i < num; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &data[i]);  // รับค่าของสมาชิกแต่ละตัว
    }

    return num;  // ส่งคืนจำนวนสมาชิกที่กรอก
}

int main() {
    int data[100];  // อาเรย์สำหรับเก็บสมาชิกในเซต
    int num;

    num = GetSet(data);  // เรียกใช้งานฟังก์ชัน GetSet เพื่อรับข้อมูลจากผู้ใช้

    // แสดงผลสมาชิกที่กรอก
    printf("\nThe elements in the set are:\n");
    for (int i = 0; i < num; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
} //end function
