#include <stdio.h>

int main() {
    int num;

    // รับค่าจำนวนจากผู้ใช้
    printf("Input :\n");
    scanf("%d", &num);

    // ตรวจสอบว่าเป็นจำนวนเต็มบวกหรือจำนวนเต็มลบ
    if (num > 0) {
        printf("Positive\n");
    } else if (num < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }

    return 0;
}
