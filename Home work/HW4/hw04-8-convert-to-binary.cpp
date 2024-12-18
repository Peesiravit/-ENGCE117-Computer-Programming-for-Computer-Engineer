#include <stdio.h>

void printBinary( int n ) 
{
    // ถ้า n > 1 ให้เรียกฟังก์ชันซ้ำจนกว่า n จะเป็น 0
    if ( n > 1 ) 
    {
        printBinary( n / 2 ) ;  // เรียกฟังก์ชันซ้ำ
    }
    printf( "%d", n % 2 ) ;  // แสดงผลเศษจากการหาร 2
}

int hexToDecimal( char hex[] ) 
{
    int decimal = 0 ;
    int i = 0 ;
    while ( hex[ i ] ) 
    {
        decimal = decimal * 16 ;  // เลื่อนตำแหน่งของฐาน 16
        if (hex[ i ] >= '0' && hex[ i ] <= '9') 
        {
            decimal += hex[ i ] - '0' ;  // แปลงจาก '0'-'9' เป็น 0-9
        } 
        else if (hex[ i ] >= 'A' && hex[ i ] <= 'F' ) 
        {
            decimal += hex[ i ] - 'A' + 10 ;   // แปลงจาก 'A'-'F' เป็น 10-15
        } 
        else if (hex[ i ] >= 'a' && hex[ i ] <= 'f' ) 
        {
            decimal += hex[ i ] - 'a' + 10 ;  // แปลงจาก 'a'-'f' เป็น 10-15
        }
        i++;
    }
    return decimal;
}

int main() 
{
    char hex[ 20 ] ;  // ตัวแปรสำหรับเก็บเลขฐาน 16
    int decimal ;   // ตัวแปรสำหรับเก็บเลขฐาน 10

    // รับค่าจากผู้ใช้
        printf( "User input :\n" ) ;
        scanf( "%s", hex ) ;

    // แปลงเลขฐาน 16 ไปเป็นเลขฐาน 10
    decimal = hexToDecimal( hex ) ;

    // แสดงผลเลขฐาน 2
        printBinary( decimal ) ;
        printf( "\n" ) ;

    return 0 ;
}
