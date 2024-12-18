#include <stdio.h>

int main() 
{
    float h, w, area ;

    // รับค่าจากผู้ใช้
        printf( "Enter H & W :\n" ) ;
        scanf( "%f %f", &h, &w ) ;

    // คำนวณพื้นที่สามเหลี่ยม
    area = (h * w) / 2 ;

    // แสดงผลลัพธ์
        printf( "Triagle Area : %.1f\n", area ) ;

    return 0 ;
}
