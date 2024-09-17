#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
float num1 = 6.25;
printf("Vocês verão tudo com erro de acento \n");
printf("Numero 1: %.2f \n",num1);
setlocale(LC_ALL, "Portuguese");
float num2 = 6.25;
printf("Vocês não verão mais erros de acento\n");
printf("Numero 2: %.2f \n",num2);
// Exercício 1 : teste a diferença do scanf para float antes de depois de
setlocale.
return 0;
}
