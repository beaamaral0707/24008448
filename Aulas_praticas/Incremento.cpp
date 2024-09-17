#include <stdio.h>
int main() {
/* --- EXPLICANDO ---
a++ -> Primeiro usa o valor atual de 'a', depois incrementa 1.
++b -> Incrementa 1 em 'b' antes de qualquer outra operação.
b = a++ -> Neste caso, 'b' recebe o valor atual de 'a', e em seguida, 'a' é
incrementado.
c = ++a -> Aqui, 'a' é incrementado primeiro, e então o valor atualizado é
atribuído a 'c'.
*/
int a = 5, b = 5, c, d, e;
printf("** FASE 1: INCREMENTO SIMPLES** \n \n");
// Incrementa 'a' após a sua utilização
a++;
// Incrementa 'b' antes da sua utilização
++b;
// Exibe os valores atualizados de 'a' e 'b'
printf("a = %d\n", a);
printf("b = %d\n", b);
printf("** FASE 2: INCREMENTO COM ATRIBUICAO** \n \n");
//
c = a++;
//
d = ++b;
// Exibe os resultados de 'b', 'a', e 'c'
printf("c = %d\n", c);
printf("d = %d\n", d);
printf("a = %d\n", a);
printf("b = %d\n", b);
return 0;
}
