#include <stdio.h>

int main() {
    int score;
    int range;  // ใช้เก็บช่วงของคะแนนที่ถูกแบ่ง

    // รับค่าคะแนนจากผู้ใช้
    printf("enter score :\n");
    scanf("%d", &score);

    // แบ่งคะแนนเป็นช่วง
    if (score < 50) {
        range = 0;  // F
    } else if (score >= 50 && score < 55) {
        range = 1;  // D
    } else if (score >= 55 && score < 60) {
        range = 2;  // D+
    } else if (score >= 60 && score < 65) {
        range = 3;  // C
    } else if (score >= 65 && score < 70) {
        range = 4;  // C+
    } else if (score >= 70 && score < 75) {
        range = 5;  // B
    } else if (score >= 75 && score < 80) {
        range = 6;  // B+
    } else {
        range = 7;  // A
    }

    // ใช้ switch case เพื่อตรวจสอบเกรดตามช่วงคะแนน
    switch (range) {
        case 0:
            printf("F !\n");
            break;
        case 1:
            printf("D !\n");
            break;
        case 2:
            printf("D+ !\n");
            break;
        case 3:
            printf("C !\n");
            break;
        case 4:
            printf("C+ !\n");
            break;
        case 5:
            printf("B !\n");
            break;
        case 6:
            printf("B+ !\n");
            break;
        case 7:
            printf("A !\n");
            break;
        default:
            printf("Invalid score!\n");
    }

    return 0;
}
