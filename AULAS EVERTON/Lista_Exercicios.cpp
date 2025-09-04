//2) Elabore um programa em Linguagem C, que pergunte o seu nome e imprima
//na tela;*#
#include <stdio.h>

int main() {
    char nome[255]; 

    printf("Olá! Qual é o seu nome?\n");
    
    printf("Meu nome é ");
    scanf("%254s", nome);

    printf("Seja bem-vindo!Prazer em te conhecer:%s\n", nome);

    return 0;
}
//5) Elabore um programa em Linguagem C, que solicite o último dígito do seu
//RA e imprima na tela se seu RA é par ou ímpar;





//8) Elabore um programa em Linguagem C, que solicite ao utilizador a
//temperatura em graus Celsius e a converta para Fahrenheit. A fórmula de
//conversão é: F = (C * 9/5) + 32;
#include <stdio.h>
#include <math.h>

int main(){
float fahrenheit;
int celsius;

printf("Insira sua temperatura em graus Celsius(°):");
scanf("%d",&celsius);

fahrenheit=((celsius * 9.0/5.0) + 32 );
  
printf("A temperatura inserida em Fahrenheit sera de:%.2f\n ",fahrenheit);

return 0;}
