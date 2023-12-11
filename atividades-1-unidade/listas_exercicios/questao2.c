#include <stdio.h>
/*questao 2) considere o trecho de código abaixo:
int main(void) {
int x, *p;
x = 100;
p = x;
printf(“Valor de p = %p\tValor de *p = %d”, p, *p);
}*/

// a) arvertência
// b) porque o ponteiro aponta para o endereço de memória e não para o valor da variavel
// c) não, pois o p dever recebe p = &x para executar o programa como o previsto
// d) código na linha 16
// e) sim, a execução ocorreu como deveria imprimindo o endereço e o valor

int main(void) {
int x, *p;
x = 100;
p = &x;
printf("Valor de p = %p\tValor de *p = %d", p, *p);
}