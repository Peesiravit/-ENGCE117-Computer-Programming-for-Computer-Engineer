#include <stdio.h>

int main() {
    int n, term = 9, sum = 0;

    // รับจำนวนตัวเลขที่ผู้ใช้ต้องการให้แสดง
    printf("Enter number : ");
    scanf("%d", &n);

    printf("Series = ");

    // ใช้ for loop เพื่อแสดงชุดอนุกรมและคำนวณผลรวม
    for (int i = 1; i <= n; i++) {
        if (i > 1) {
            printf(" + ");
        }
        printf("%d", term);  // แสดงค่าปัจจุบันในชุดอนุกรม
        sum += term;  // คำนวณผลรวม

        // สร้างตัวเลขถัดไป (เช่น 9 -> 99 -> 999 -> ...)
        term = term * 10 + 9;
    }

    // แสดงผลรวม
    printf("\nSum = %d\n", sum);

    return 0;
}
