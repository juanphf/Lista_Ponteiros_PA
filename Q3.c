

// p = &i; -> Valida, está sendo atribuído o endereço de memória de i ao ponteiro p.
// *q = &j; -> Não é valida, pois *q é um valor e não pode receber um endereço de memória.
// p = &*&i; -> Valida, é o mesmo que p = &i.
// i = (*&)j; -> Não é valida, pois está tentando desreferenciar um endereço de memória que não foi inicializado.
// i = *&j; -> Valida, desreferencia o endereço de j e retorna o valor de j, ou seja i = j.
// i = *&*&j; -> Valida, desreferencia o endereço de j duas vezes, ou seja i = j.
// q = *p; -> Não é valido, q é um ponteiro e não pode receber o valor que está armazenado no conteudo de p, so recebe endereço de memoria.
// i = (*p)++ + *q; ->Não é valida O conteúdo de p é somado com o conteúdo de q, e o incremento de +1 no *p ocorre após o uso do valor de *p na expressão.