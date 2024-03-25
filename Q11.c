#include <stdio.h>

int main(){
    
    char x[4];
    // short int x[4];  // usando short int para testar pois tem 2 bytes
    // float x[4];
    // double x[4];

    x[0] = 0;
    x[1] = 1;
    x[2] = 2;
    x[3] = 3;

    printf(" %p %p %p %p ", x, x + 1, x+2, x+3);

}



// char (1 byte): x = 4092, x+1 = 4093, x+2 = 4094, x+3 = 4095.

// int (2 bytes): x = 4092, x+1 = 4094, x+2 = 4096, x+3 = 4098.

// float (4 bytes): x = 4092, x+1 = 4096, x+2 = 4100, x+3 = 4104.

// double (8 bytes): x = 4092, x+1 = 4100, x+2 = 4108, x+3 = 4116.