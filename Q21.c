//  Na letra D há um vazamento de memória, pois está alocando a memória com o malloc na 
// variavel num, mas não usa o free para liberar a memória ao final da execução.



// D)
//   int *f(int n){
//   int *num = malloc(sizeof(int)*n);
//   return num;
// }
