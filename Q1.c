#include <stdio.h>

int main() {
    int i=3, j=5;
    int *p, *q;
    
    p=&i;
    q=&j;

    // Letra a
    printf("Letra a: \n");
    if( p == &i ){
        printf("True");
    } else{
        printf("False");
    }
    printf("\n");
    // R = True, pois quando se compara p com &i, você está verificando se p contém o endereço de i. Na linha p=&i;, 
    // o endereço de i é atribuído a p. Portanto, quando você faz a comparação p == &i, a condição é verdadeira, 
    // já que p realmente contém o endereço de i.

    // Letra b
    printf("Letra b: \n");
    printf(" *p = %d\n", *p);  // Aponta para i
    printf(" *q = %d\n", *q);  // Aponta para j
    printf(" *p - *q = %d\n", *p-*q);
    // R = *p é valor do ponteiro p que aponta para i e vale 3, e *q é o valor do ponteiro q que aponta para j e vale 5, ou seja 3 - 5 = -2.

    // Letra c
    printf("Letra c: \n");
    printf("**&p = %d\n", **&p);
    // R = 3
    // "&p": Isso retorna o endereço do ponteiro "p".
    // "*&p": Desreferencia o endereço do ponteiro "p", então é o próprio ponteiro "p".
    // "**&p": Desreferencia o valor apontado por "p", acessa o conteúdo de p.
    // Então "**&p" é equivalente a "*p", que é o valor para o qual "p" aponta, p aponta para "i" que vale 3.

    // Letra d
    printf("Letra d: \n");
    printf(" *p = %d\n", *p);  // Aponta para i
    printf(" *q = %d\n", *q);  // Aponta para j
    printf(" = %d", (3 - (*p/(*q)) + 7));
    // R = 10
    // *p é valor do ponteiro p que aponta para i e vale 3, e *q é o valor do ponteiro q que aponta para j e vale 5. 
    // Jogando na equação a resposta é 10.
    
    return 0;
}