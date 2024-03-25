int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco\n");
  for(i = 0 ; i <= 4 ; i++){
  printf("i = %d",i);
  printf(" vet[%d] = %.1f",i, vet[i]);  // acessa o conteúdo do array pelo proprio array
  printf(" *(f + %d) = %.1f",i, *(f+i));  // acessa o conteúdo pelo ponteiro, e utiliza o i do laço for para mostrar o de cada elemento
  printf(" &vet[%d] = %X",i, &vet[i]);  // acessa o endereço de memória usando o & no proprio indice do array.
  printf(" (f + %d) = %X",i, f+i);  // acessa o endereço de memória pelo ponteiro, e utiliza o i do laço for para mostrar o de cada elemento
  printf("\n");
  }
}

// Duas formas de acessar tanto o conteúdo do array como o endereço de memória
// uma utilizando diretamente o array e outra utizando ponteiros.