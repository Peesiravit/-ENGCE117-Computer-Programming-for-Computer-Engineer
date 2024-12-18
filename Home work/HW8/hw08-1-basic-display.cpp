#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    float avg;
    
    // รับจำนวน n จากผู้ใช้
    printf("Enter value n :\n");
    scanf("%d", &n);
    
    // รับค่าตัวเลขจากผู้ใช้ n ชุด
    for (int i = 1; i <= n; i++) {
        int num;
        printf("Enter number %d :\n", i);
        scanf("%d", &num);
        sum += num;  // เพิ่มตัวเลขที่กรอกเข้าในผลรวม
    }
    
    // คำนวณค่าเฉลี่ย
    avg = (float)sum / n;
    
    // แสดงผลลัพธ์
    printf("Sum = %d\n", sum);
    printf("Avg = %.2f\n", avg);  // แสดงค่าเฉลี่ย 2 ตำแหน่งทศนิยม
    
    return 0;
}
