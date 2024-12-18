#include <stdio.h>

void format_salary( float salary ) 
{
    // แปลงเป็นสตริงด้วยการใช้ printf() โดยตรง
    int int_part = ( int )salary ;   // ส่วนจำนวนเต็ม
    int dec_part = ( int ) ( ( salary - int_part ) * 100 ) ; // ส่วนทศนิยม (2 ตำแหน่ง)

        // แสดงผลแบบมีลูกน้ำ
        printf( "Salary = U$ " ) ;
    
        // แสดงตัวเลขที่มีลูกน้ำ
    if ( int_part >= 1000 ) 
    {
        printf( "%d,%03d", int_part / 1000, int_part % 1000 ) ;
    } 
    else 
    {
        printf( "%d", int_part ) ;
    }
    
    // แสดงส่วนทศนิยม
    printf( ".%02d\n", dec_part ) ;
}

int main() 
{
    char emp_id[ 11 ] ;  // รหัสประจำตัวพนักงาน (สูงสุด 10 ตัวอักษร + 1 สำหรับ null-terminator)
    int working_hours ;
    float salary_per_hour, total_salary ;

    // รับข้อมูลจากผู้ใช้
        printf( "Input the Employees ID(Max. 10 chars): \n" ) ;
        scanf( "%s", emp_id ) ;  // รับรหัสพนักงานเป็นสตริง
        printf( "Input the working hrs: \n" ) ;
        scanf( "%d", &working_hours ) ;  // รับจำนวนชั่วโมงที่ทำงาน
        printf( "Salary amount/hr: \n" ) ;
        scanf( "%f", &salary_per_hour ) ;  // รับรายได้ต่อชั่วโมง

    // คำนวณรายได้รวม
    total_salary = working_hours * salary_per_hour ;

    // แสดงผลรหัสพนักงาน
    printf( "Employees ID = %s\n", emp_id ) ;

    // เรียกใช้ฟังก์ชันเพื่อแสดงผลรายได้ที่มีลูกน้ำ
    format_salary( total_salary ) ;

    return 0 ;
}
