#include <stdio.h>

int main() {
    int num1, num2;

    // รับค่าตัวเลข 2 ตัวจากผู้ใช้
    printf("Input 1 :\n");
    scanf("%d", &num1);

    printf("Input 2 :\n");
    scanf("%d", &num2);

    // เปรียบเทียบตัวเลข
    if (num1 < num2) {
        printf("Number1 lower than Number2\n");
    } else if (num1 > num2) {
        printf("Number1 greater than Number2\n");
    } else {
        printf("Number1 equal Number2\n");
    }

    return 0;
}
