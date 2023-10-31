#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int hour , min ;
    scanf( "%d%d" , &hour , &min );
    float angle_hour = 30 * hour + min * 0.5 ;
    int angle_min = 6 * min ;
    double out ;
    if ( angle_hour - angle_min < 0 ) {
        out = angle_min - angle_hour ;
    }
    else {
        out = angle_hour - angle_min ;
    }
    if ( out >=180 ) {
        out = 360 - out ;
    }
    printf( "%.3f\n" , out );
    return 0;
}
