#include <stdio.h>

int main() {
    int num1, num2, num3;

    // ขอให้ผู้ใช้กรอกตัวเลข 3 ตัว
    printf("Input[1] :\n");
    scanf("%d", &num1);

    printf("Input[2] :\n");
    scanf("%d", &num2);

    printf("Input[3] :\n");
    scanf("%d", &num3);

    // เปรียบเทียบและจัดเรียงจากมากไปน้อย
    if (num1 >= num2 && num1 >= num3) {
        if (num2 >= num3) {
            printf("Output: %d %d %d\n", num1, num2, num3);
        } else {
            printf("Output: %d %d %d\n", num1, num3, num2);
        }
    } else if (num2 >= num1 && num2 >= num3) {
        if (num1 >= num3) {
            printf("Output: %d %d %d\n", num2, num1, num3);
        } else {
            printf("Output: %d %d %d\n", num2, num3, num1);
        }
    } else {
        if (num1 >= num2) {
            printf("Output: %d %d %d\n", num3, num1, num2);
        } else {
            printf("Output: %d %d %d\n", num3, num2, num1);
        }
    }

    return 0;
}
