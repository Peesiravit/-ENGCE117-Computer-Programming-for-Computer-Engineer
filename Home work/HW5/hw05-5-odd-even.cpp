#include <stdio.h>

int main() {
    int num;

    // รับค่าตัวเลขจากผู้ใช้
    printf("Input :\n");
    scanf("%d", &num);

    // ตรวจสอบว่าเป็นเลขคู่หรือเลขคี่
    if (num % 2 == 0) {
        printf("%d is an even integer\n", num);
    } else {
        printf("%d is an odd integer\n", num);
    }

    return 0;
}
