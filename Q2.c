#include <stdio.h>

int main(){
  int i=5, *p;
  p = &i;
  printf("%p %p %d %d %d %d\n", p, p+1, *p+2, **&p, 3**p, **&p+4);
}

// p = 4094 -> Ao usar o "%p" dentro do printf fará com que mostre o endereço de memória 4094 em Hexadecimal
// p + 1 = 4096 -> Aponta para o endereço de memória seguinte, que está 2 bytes à frente
// *p + 2 = 7 -> O conteúdo de p está sendo está sendo somado com 2.
// **&p = 5 -> Está acessando o conteúdo do endereço de memória de p.
// 3**p = 15 -> Aqui está sendo feita a multiplicação de 3 pelo conteúdo de p.
// **&p + 4 = 9 -> Está acessando o conteúdo do endereço de memória de p e somando com 4.