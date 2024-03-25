// #include <stdio.h>
// struct teste{
//   int x = 3;
//   char nome[] = "jose"; // Não definiu o tamanho do vetor
// };
// main(){
//   struct teste *s; // não alocou espaço de memória para s
//   printf("%d", s->x);
//   printf("%s", s->name);  // nome e não name
// }

// Nada será exibido pois o código está errado


// Exemplo de codigo correto
#include <stdio.h>

struct teste{
  int x;
  char nome[20]; // Definindo tamanho máximo para o array de caracteres
};

int main(){
  struct teste s = {3, "jose"}; // Inicializando a estrutura s
  struct teste *ptr_s = &s; // Declarando um ponteiro para a estrutura s
  
  printf("%d\n", ptr_s->x); // Imprimindo o valor de x
  printf("%s\n", ptr_s->nome); // Imprimindo o valor de nome
  
  return 0;