#include <stdio.h>

int main() {
    int score;
    
    // รับค่าคะแนนจากผู้ใช้
    printf("Enter score :\n");
    scanf("%d", &score);
    
    // ใช้คำสั่ง for ในการตรวจสอบเกรด
    for (int i = 0; i < 1; i++) {
        if (score < 50) {
            printf("F !\n");
            break;
        } else if (score >= 50 && score < 55) {
            printf("D !\n");
            break;
        } else if (score >= 55 && score < 60) {
            printf("D+ !\n");
            break;
        } else if (score >= 60 && score < 65) {
            printf("C !\n");
            break;
        } else if (score >= 65 && score < 70) {
            printf("C+ !\n");
            break;
        } else if (score >= 70 && score < 75) {
            printf("B !\n");
            break;
        } else if (score >= 75 && score < 80) {
            printf("B+ !\n");
            break;
        } else if (score >= 80) {
            printf("A !\n");
            break;
        }
    }
    
    return 0;
}
