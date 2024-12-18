#include <stdio.h>

int isPrime(int num) {
    // ถ้าเป็น 1 หรือ 0 ไม่ใช่จำนวนเฉพาะ
    if (num <= 1) {
        return 0;
    }

    // เช็คว่า num แบ่งลงด้วยจำนวนอื่นๆ ไหม
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // ถ้าแบ่งได้ แสดงว่าไม่ใช่จำนวนเฉพาะ
        }
    }
    return 1; // ถ้าไม่แบ่งได้ แสดงว่าเป็นจำนวนเฉพาะ
}

int main() {
    int n;
    
    // รับจำนวนจากผู้ใช้
    printf("Enter number : ");
    scanf("%d", &n);

    // เช็คจำนวนเฉพาะจาก n ลงมาจนถึง 2
    printf("Output: ");
    for (int i = n; i >= 2; i--) {
        if (isPrime(i)) {
            printf("%d ", i); // แสดงจำนวนเฉพาะ
        }
    }
    printf("\n");

    return 0;
}
