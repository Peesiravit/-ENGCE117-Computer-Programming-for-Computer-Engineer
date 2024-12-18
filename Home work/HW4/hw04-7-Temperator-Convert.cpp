#include <stdio.h>

int main() 
{
    float celsius, fahrenheit ;

    printf( "User input :\n" ) ;                               // รับค่าอุณหภูมิจากผู้ใช้
    scanf( "%f", &celsius ) ;
    
    fahrenheit = ( celsius * 9 / 5 ) + 32 ;                   // คำนวณอุณหภูมิในฟาเรนไฮต์
    
        printf( "%.2f degree Celsius = %.1f degree Fahrenheit\n", celsius, fahrenheit ) ;            // แสดงผลลัพธ์

    return 0 ;
}
