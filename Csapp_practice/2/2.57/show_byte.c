#include<stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes( byte_pointer start, int len ){
    int i;
    for( i = 0;i < len;i++ )
        printf( " %.2x",start[i] );
    printf( "\n" );
}

void show_int( int x ){
    show_bytes( (byte_pointer) &x,sizeof( int ) );
}

void show_long( long int x ){
     show_bytes( (byte_pointer) &x,sizeof( long int ) );
}

void show_double( double x ){
     show_bytes( (byte_pointer) &x,sizeof( double ) );
}

void show_float( float x ){
     show_bytes( (byte_pointer) &x,sizeof (float) );
}
int main(){
     long int x;
     int y;
     float z;
     scanf( "%f",&z );
     show_float( z );
     scanf( "%d",&y );
     show_int(y);
     return 0;
}
