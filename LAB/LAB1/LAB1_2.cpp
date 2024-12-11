#include <stdio.h>
#include <string.h>

// ประกาศฟังก์ชัน GetSet ที่รับพอยน์เตอร์อาร์เรย์และพอยน์เตอร์ของจำนวนสมาชิก
void GetSet(int data[], int *num) {
    // รับจำนวนสมาชิก
    scanf("%d", num);
    
    // รับค่าของสมาชิกแต่ละตัว
    for (int i = 0; i < *num; i++) {
        scanf("%d", &data[i]);  // รับค่าของแต่ละสมาชิก
    }

    // แสดงผลข้อมูลที่รับเข้ามา
    printf("Data: ");
    for (int i = 0; i < *num; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
}

int main() {
    int *data; // พอยน์เตอร์อาร์เรย์
    int num; // จำนวนสมาชิก

    // อาร์เรย์ที่ใช้เก็บข้อมูลจะถูกประกาศใน main()
    int dataArray[100]; // อาร์เรย์ขนาดคงที่ (สามารถรับได้สูงสุด 100 สมาชิก)

    // ส่งที่อยู่ของอาร์เรย์ dataArray ไปยัง GetSet
    data = dataArray; // ให้ data ชี้ไปที่ dataArray
    GetSet(data, &num); // เรียกใช้ฟังก์ชัน GetSet

    return 0;
}
