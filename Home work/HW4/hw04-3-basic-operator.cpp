#include <stdio.h>

int main() 
{
    int a, b, c ;
    
    // รับค่าตัวเลข 3 ตัวจากผู้ใช้
        printf( "enter three number you need to sum : " ) ; 
        scanf( "%d %d %d", &a, &b, &c ) ;
    
    // คำนวณผลรวมของตัวเลข
    int sum = a + b + c ;
    
    // แสดงผลลัพธ์
    printf( "Answer = %d\n", sum ) ;

    return 0 ;
}
