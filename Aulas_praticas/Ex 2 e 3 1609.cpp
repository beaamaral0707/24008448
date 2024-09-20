#include<stdio.h>
int main()
{
int num;
num=1;
printf("\n\t Imprimir os números de 1 até 50 : \n");
while (num<=50)
{
printf(" %d\n",num);
num++;
}
return 0;
}



////////////////////////////////////////////////////////
#include<stdio.h>
int main()
{
int num;

printf("\n\t Imprimir os números decrescente: \n");
scanf("%d",&num);
while (num>=0)
{
printf(" %d\n",num);
num--;
}
return 0;
// Exercício 2: Imprima os números na forma decrescente 50, 49, ...1
// Exercício 3: Permita que o usuário digite o número inicial, e mostre em ordem
//decrescente até 0.
}

//////////////////////////////////////////////////////
#include <stdio.h>
int main()
{
int num,mult = 1;
printf("\n\t Digite o numero desejado da tabuada: ");
scanf("%d",&num);
while (mult<11)
{
printf(" %d x %d = %d \n",num,mult++,(num*mult));
}
return 0;
}











