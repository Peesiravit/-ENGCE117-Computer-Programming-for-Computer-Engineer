#include <stdio.h>

int main() {
    int n, i = 1;
    
    // รับจำนวนจากผู้ใช้
    scanf("%d", &n);
    
    // ใช้ while loop เพื่อตรวจสอบและพิมพ์ "Hello World"
    while (i <= n) {
        if (n % 2 == 0) {
            // ถ้า i เป็นเลขคู่
            printf("(%d) Hello World\n", i);
        } else {
            // ถ้า i เป็นเลขคี่
            printf("[%d] Hello World\n", i);
        }
        i++; // เพิ่มค่า i เพื่อให้ loop ทำงานในบรรทัดถัดไป
    }
    
    return 0;
}