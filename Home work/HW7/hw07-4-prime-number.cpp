#include <stdio.h>
#include <stdbool.h>

// ฟังก์ชันตรวจสอบว่าเป็นจำนวนเฉพาะหรือไม่
bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    
    // รับค่าจำนวนจากผู้ใช้
    printf("Enter number :\n");
    scanf("%d", &n);
    
    printf("Output:\n");
    
    // เริ่มต้นจาก n แล้วลดลงเรื่อย ๆ โดยใช้ do-while loop
    do {
        // หากเป็นจำนวนเฉพาะให้พิมพ์
        if (is_prime(n)) {
            printf("%d ", n);
        }
        n--;  // ลดค่าลงทีละ 1
    } while (n >= 2);  // ทำจนถึงค่า 2
    
    printf("\n");
    
    return 0;
}

