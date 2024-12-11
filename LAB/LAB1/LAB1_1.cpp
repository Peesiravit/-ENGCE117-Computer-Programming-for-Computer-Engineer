#include <stdio.h>

int main ( ) {
    int number ;
        printf ("Enter your number :");
        scanf ( "%d" , &number ) ;
        for ( int i ;  i <= number ; i++ ) {
            printf ( "[%d] Hello world \n" , i ) ;
        }
    return 0 ;
}