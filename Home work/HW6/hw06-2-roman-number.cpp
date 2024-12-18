#include <stdio.h>

int main() {
    int num;

    // รับค่าตัวเลขจากผู้ใช้
    scanf("%d", &num);

    // ตารางตัวเลขโรมันและค่าตัวเลขอารบิก
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char *roman[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" } ;

    printf("%d = ", num);

    // ใช้ for loop เพื่อแปลงตัวเลขเป็นตัวเลขโรมัน
    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            printf("%s", roman[i]);
            num -= values[i];
        }
    }

    printf("\n");
    return 0;
}
