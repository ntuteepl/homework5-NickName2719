#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int in ;
    double out ;
    scanf( "%d" , &in );
    if ( in <= 800 ) {
        out = 0.9 * in ;
    }
    else if ( in <= 1500 ) {
        out = 0.9 * 0.9 * in ;
    }
    else {
        out = 0.79 * 0.9 * in ;
    }
    printf( "%.1f\n" , out );
    return 0;
}
