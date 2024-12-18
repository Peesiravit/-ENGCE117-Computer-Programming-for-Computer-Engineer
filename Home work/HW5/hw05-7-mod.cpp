#include <stdio.h>

int main() {
    int year;

    // รับค่าปี ค.ศ. จากผู้ใช้
    printf("Year(s) :\n");
    scanf("%d", &year);

    // ตรวจสอบว่าเป็นปีอธิกสุรทินหรือไม่
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("February has 29 days\n");
    } else {
        printf("February has 28 days\n");
    }

    return 0;
}
