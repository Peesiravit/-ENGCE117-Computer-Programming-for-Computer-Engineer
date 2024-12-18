#include <stdio.h>

int main() {
    int n, num = 9, sum = 0;
    
    // รับค่าจำนวนตัวเลขจากผู้ใช้
    printf("Enter number :\n");
    scanf("%d", &n);
    
    // แสดงชุดอนุกรม
    printf("Series = ");
    
    int i = 1;
    do {
        // พิมพ์ชุดอนุกรม
        if (i > 1) {
            printf(" + ");
        }
        printf("%d", num);
        
        // คำนวณผลรวม
        sum += num;
        
        // เปลี่ยนค่าของ num โดยการเพิ่มหลัก
        num = num * 10 + 9;
        
        i++;
    } while (i <= n);
    
    // แสดงผลรวม
    printf("\nSum = %d\n", sum);
    
    return 0;
}
