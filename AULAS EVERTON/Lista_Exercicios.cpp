//2) Elabore um programa em Linguagem C, que pergunte o seu nome e imprima
//na tela;*#



//5) Elabore um programa em Linguagem C, que solicite o último dígito do seu
//RA e imprima na tela se seu RA é par ou ímpar;





//8) Elabore um programa em Linguagem C, que solicite ao utilizador a
//temperatura em graus Celsius e a converta para Fahrenheit. A fórmula de
//conversão é: F = (C * 9/5) + 32;


#include <stdlib.h>
#include <math.h>

int main(){
float fahrenheit;
int celsius;

printf("Insira sua temperatuar em graus Celsius(°):",celsius);

fahrenheit=((celsius * 9/5) + 32 );
scanf("%lf",&fahrenheit); 
  
printf("A temperatura inserida em Fahrenheit sera de:%2lf\n",);
return 0;}
