#include <stdio.h>

int main() {
    int start, end, i, j;
    
    // รับค่าจากผู้ใช้
    printf("Start: ");
    scanf("%d", &start);
    printf("End: ");
    scanf("%d", &end);

    // ใช้ while loop เพื่อพิมพ์แม่สูตรคูณ
    i = start;
    while (i <= end) {
        j = 1;
        while (j <= 9) {
            printf("%d x %d = %d\n", i, j, i * j);
            j++;  // เพิ่มค่า j
        }
        i++;  // เพิ่มค่า i เพื่อทำการแสดงแม่สูตรคูณของตัวถัดไป
     printf("\n");
    }   
    return 0;
}
