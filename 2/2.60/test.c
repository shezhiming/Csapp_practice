#include<stdio.h>

unsigned replace_byte( unsigned x,unsigned char b,int j ){
    int i;
    unsigned char *c = (unsigned char *)&x;
    printf( "the orgin num of hex:\n" );
    for( i = 0;i < 4;i++ ){
        printf( "%.2x",*(c+i));
    }
    printf( "\nexange the num i bite:\n" );
    *(c+i) = b;
    for( i = 0;i < 4;i++ ){
        printf( "%.2x",*(c+i));

    }
}

int main(){
    unsigned us = 12345;
    unsigned char uc = 'B';
    int i = 0;
    replace_byte( us,uc,i );
    return 0;

}
