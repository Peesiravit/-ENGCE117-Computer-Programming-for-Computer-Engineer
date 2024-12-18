#include <stdio.h>

// ฟังก์ชันสำหรับคำนวณค่า factorial แบบ recursive
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // กรณีพื้นฐาน: 0! = 1 และ 1! = 1
    } else {
        return n * factorial(n - 1);  // เรียกฟังก์ชันซ้ำ
    }
}

// ฟังก์ชันสำหรับแสดงลำดับการคูณของ factorial
void printFactorialSeries(int n) {
    if (n == 1) {
        printf("1");
    } else {
        printf("%d x ", n);  // พิมพ์ตัวเลขและเครื่องหมายคูณ
        printFactorialSeries(n - 1);  // เรียกตัวเองเพื่อพิมพ์ตัวเลขถัดไป
    }
}

int main() {
    int n;
    
    // รับค่าตัวเลขจากผู้ใช้
    scanf("%d", &n);
    
    // แสดงลำดับการคูณของ factorial
    printf("%d! = ", n);
    printFactorialSeries(n);  // แสดงลำดับการคูณ
    printf("\n");
    
    // คำนวณค่า factorial และแสดงผลลัพธ์
    int result = factorial(n);
    printf("%d! = %d\n", n, result);
    
    return 0;
}
