#include <stdio.h>

int main(){
  int vet[] = {4, 9, 13};
  int i;
  for(i=0;i<3;i++){
  printf("%d ", *(vet+i));
  }
}

// No codigo acima o laço for percorre o array e mostra os elementos que estão dentro dele usando a desreferenciação do ponteiro.

// int main(){
//   int vet[] = {4, 9, 13};
//   int i;
//   for(i=0;i<3;i++){
//   printf("%X ",vet+i);
//   }
// }

// Ja neste codigo o laço for percorre o array e mostra o endereço de memória de cada elemento.


