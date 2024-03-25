#include <stdio.h>

int main(){
    int pulo[5];

    pulo[0] = 3;
    pulo[1] = 6;
    pulo[2] = 9;
    pulo[3] = 12;
    pulo[4] = 15;

    printf("*(pulo + 2) = %d\n", *(pulo + 2));
    printf("*(pulo + 4) = %d\n", *(pulo + 4));
    printf("pulo + 4 = %d\n", pulo + 4);
    printf("pulo + 2 = %d", pulo + 2);
}


// *(pulo + 2);  // acessa o terceiro elemento
// *(pulo + 4); // Não referencia ao terceiro elemento, e sim ao quinto.
// pulo + 4; // Não referencia ao terceiro elemento, e sim ao quinto.
// pulo + 2; // acessa o endereco de memória do terceiro elemento
