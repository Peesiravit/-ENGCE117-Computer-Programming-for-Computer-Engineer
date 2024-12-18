#include <stdio.h>

int main() {
    int n ;

    scanf( "%d", &n ) ;// รับจำนวนบรรทัดจากผู้ใช้

    for( int i = 1 ; i <= n ; i++ ) {
        if( n % 2 == 0 ) {
            printf( "(%d) Hello World\n", i ) ;
        } else {
            printf("[%d] Hello world\n", i ) ;
        }

    }
    return 0 ;
}