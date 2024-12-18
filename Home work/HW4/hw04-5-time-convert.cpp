#include <stdio.h>

int main() 
{
    int days ;
    int seconds ;

        printf( "Input Days : \n" ) ;// รับจำนวนวันจากผู้ใช้
        scanf( "%d", &days ) ;
        
    seconds = days * 86400 ; // คำนวณจำนวนวินาที1 วัน = 86400 วินาที
        printf( "%d days = %d seconds\n", days, seconds ) ;// แสดงผลลัพธ์
    return 0;
}
