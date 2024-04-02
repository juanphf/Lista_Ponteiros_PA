// O memomy leak ocorre quando não libera a memória que não está mais sendo utilizada pelo programa.


//1° exemplo:
//#include <stdlib.h>

// int main() {
//     while (1) {
//         int *ptr = (int *)malloc(sizeof(int));
//         // O ponteiro é alocado dinamicamente,
//         // mas nunca é liberado.
//     }
//     return 0;
// }

// Alocando memoria sem liberar

// 2° exemplo:
// #include <stdlib.h>

// int main() {
//     int *ptr = (int *)malloc(sizeof(int));
//     ptr = (int *)malloc(sizeof(int)); // Reatribui o ponteiro antes de liberar a memória anterior.
//     free(ptr); // O ponteiro original não é liberado, resultando em memory leak.
//     return 0;
// }

// Falha em liberar a memória antes de reatribuir

// 3° exemplo:
//#include <stdlib.h>

// int main() {
//     int *ptr = (int *)malloc(sizeof(int));
//     int a;
//     ptr = &a; // O ponteiro perde a referência para a memória alocada.
//     // O espaço de memória alocado não pode mais ser liberado, resultando em memory leak.
//     return 0;
// }

// Perda de ponteiro
