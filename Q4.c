#include <stdio.h>
int main() {
  int valor;
  int *p1;
  float temp;
  float *p2;
  char aux;
  char *nome = "Ponteiros";
  char *p3;
  int idade;
  int vetor[3];
  int *p4;
  int *p5;
  
  
  
  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("a = %d \n", valor);

// a) 20

// p1 aponta para o endereço de memória da variável "valor", então ao alterar o valor de *p1, tambem é alterado
// o conteúdo da variável "valor", por isso é exibido 20.

  
  
  /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("b = %.1f \n", temp);

// b) 29.0

// p2 aponta para o endereço de memória da variável "temp", então ao alterar o valor de *p2, tambem é alterado
// o conteúdo da variável "temp", por isso é exibido 29.0.
  
  
  
  /* (c) */
  p3 = &nome[0];
  aux = *p3;
  printf("c = %c \n", aux);

// c) P

// p3 aponta para o endereço de memória do elemento de índice 0 do array, então o *p3 agora tem como valor o primeiro elemento do array "nome", 
// e na penultima linha o "aux" recebe esse elemento.
  
  
  
  /* (d) */
  p3= &nome[4];
  aux= *p3;
  printf("d = %c \n", aux);

// d) e

// p3 aponta para o endereço de memória do elemento de índice 4 do array, então o *p3 agora tem como valor o quinto elemento do array "nome",
// e na penultima linha o "aux" recebe esse elemento.
 
 
  /* (e) */
  p3= nome;
  printf("e = %c \n", *p3);

// e) P
  
// p3 aponta para o array nome, e será exibido somente o primeiro elemento do array.  

  
  /* (f) */
  p3= p3 + 4;
  printf("f = %c \n", *p3);

// f) e
  
//  Está sendo encrementado + 4 ao ponteiro p3, então ele irá para o elemento de indice 4 do array.

  
  /* (g) */
  p3--;
  printf("g = %c \n", *p3);

// g) t
  
// O ponteiro p3 estava no indice 4 do array, ao fazer p3-- está decrementando o indice em 1, ou seja, indo para o indice 3 do array.

  
  /* (h) */
  vetor[0]= 31;
  vetor[1]= 45;
  vetor[2]= 27;
  p4= vetor;
  idade= *p4;
  printf("h = %d \n", idade);

// h) 31
  
// idade guarda o conteudo de p4 que está apontando para o array "vetor", ao dar o printf em idade ele mostra o primeiro elemento guardado no array.

  
  /* (i) */
  p5= p4+1;
  idade= *p5;
  printf("i = %d \n", idade);
  
// i) 45

// No p4 esta guardado o array "vetor", ao ser incrementado +1 ele passa do indice 0 para o indice 1 do array, então no conteudo de p5 está p4[1].

  
  /* (j) */
  p4= p5+1;
  idade= *p4;
  printf("j = %d \n", idade);

// j) 27
  
//  p4 aponta para o elemento que está logo após o elemento que p5 aponta, no caso o numero 27 no indice 2.
  
  /* (l) */
  p4= p4-2;
  idade= *p4;
  printf("l = %d \n", idade);

// l) 31

// p4 está sendo decrementado -2 e está voltando para o indice 0 do array.

  
  /* (m) */
  p5= &vetor[2]-1;
  printf("m = %d \n", *p5);

// m) 45

// está acessando o endereço de memoria do terceiro elemento do array e decrementando 1, voltando para o elemento de indice 1.

  
  /* (n) */
  p5++;
  printf("n = %d \n", *p5);
  return(0);

// n) 27

// p5 inicialmente está no indice 1, ao ser incrementado +1 ele vai para o indice 2 do array.

}


