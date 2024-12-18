#include <stdio.h>

int main() 
{
    int a = 0, b = 0 ;
        printf( "Please enter value (a b): " ) ;
        scanf( "%d %d", &a, &b ) ; // Input 'a' and 'b'

        printf( "a = %d, b = %d\n", a, b ) ;

        // Arithmetic Operations
        printf( "a + b = %d\n", a + b ) ;
        printf( "a - b = %d\n", a - b ) ;
        printf( "a * b = %d\n", a * b ) ;
        printf( "a / b = %d (b must be greater than 0)\n", b > 0 ? a / b : 0 ) ; // Avoid division by zero
        printf( "a %% b = %d\n", b != 0 ? a % b : 0 ) ; // Avoid division by zero for modulus operation
        printf( "++a = %d\n", ++a ) ; // Pre-increment a
        printf( "a-- = %d\n", a-- ) ; // Post-decrement a
        printf( "a += 1 = %d\n", a += 1 ) ; // Increment a by 1
        printf( "a += b = %d\n", a += b ) ; // Increment a by b
        printf( "a -= 1 = %d\n", a -= 1 ) ; // Decrement a by 1
        printf( "a -= b = %d\n", a -= b ) ; // Decrement a by b
        printf( "a *= 1 = %d\n", a *= 1 ) ; // Multiply a by 1
        printf( "a *= b = %d\n", a *= b ) ; // Multiply a by b
        printf( "a %%= 1 = %d\n", a %= 1 ) ; // Modulo a by 1
        printf( "a %%= b = %d\n", a %= b ) ; // Modulo a by b (check b != 0 before using this)
        printf( "a && b = %d\n", a && b ) ; // Logical AND
        printf( "a || b = %d\n", a || b ) ; // Logical OR

    return 0;
}
