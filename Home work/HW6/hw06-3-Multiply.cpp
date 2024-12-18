#include <stdio.h>

int main() {
    int start, end;

    // รับค่าตัวเลขจากผู้ใช้
    printf("Start : ");
    scanf("%d", &start);
    printf("End : ");
    scanf("%d", &end);

    // วนลูปจาก start ถึง end
    for (int i = start; i <= end; i++) {
        // แสดงแม่สูตรคูณจาก i x 1 ถึง i x 9
        for (int j = 1; j <= 9; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); // เว้นบรรทัดระหว่างแต่ละชุดของแม่สูตรคูณ
    }

    return 0;
}
