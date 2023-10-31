#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int time , paid ;
    double out ;
    scanf( "%d%d" , &time , &paid );
    if ( time <= 60 ) {
        out = paid * time ;
    }
    else if ( time
              <= 120 ) {
        out = paid * 60 + 1.33 * paid * (time-60) ;
    }
    else {
        out = paid * 60 + 1.33 * paid * 60 + 1.66 * paid * (time-120) ;
    }
    printf( "%.1f\n" , out );
    return 0;
}
