#include <stdio.h>

int main() 
{
    // ประกาศตัวแปรเพื่อเก็บตัวอักขระ 4 ตัว
    char char1, char2, char3, char4 ;
        
        scanf( " %c %c %c %c", &char1, &char2, &char3, &char4 ) ; // รับค่าอักขระ 4 ตัวจากผู้ใช้
        printf( "Result: %c %c %c %c\n", char4, char3, char2, char1 ) ; // แสดงผลลัพธ์ในลำดับย้อนกลับ
    
    return 0 ;
}
