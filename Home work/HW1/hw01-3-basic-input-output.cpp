/*
    เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
    
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
*/
#include <stdio.h>  // ใช้สำหรับการรับข้อมูลและแสดงผล

int main () 
{
    char firstName [ 50 ] , lastName [ 50 ] ;  // ประกาศตัวแปรสำหรับเก็บชื่อและนามสกุล

    // รับข้อมูลจากผู้ใช้
        printf ( "First Name: " ) ;
            scanf ( "%s" , firstName ) ;  // รับชื่อจากผู้ใช้

        printf ( "Last Name: " ) ;
            scanf ( "%s" , lastName ) ;   // รับนามสกุลจากผู้ใช้

    // แสดงผล
        printf ( "%s %s TC, RMUTL, Chiang Mai, Thailand\n" , firstName , lastName ) ;  // แสดงผลตามที่โจทย์กำหนด

    return 0 ;
}
