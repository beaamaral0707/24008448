//2) Elabore um programa em Linguagem C, que pergunte o seu nome e imprima
//na tela;*#
#include <stdio.h>

int main() {
    char nome[255];  // declara a variável para armazenar o nome

    printf("Olá! Qual é o seu nome?\n"); // Pergunta o nome da pessoa
    
    printf("Meu nome é: "); // local onde insere o nome da pessoa
    fgets(nome, sizeof(nome), stdin); // lê inclusive os espaços

    printf("Seja bem-vindo! Prazer em te conhecer: %s\n", nome); // Mostra na tela o resultado formatado

    return 0;
}

//5) Elabore um programa em Linguagem C, que solicite o último dígito do seu
//RA e imprima na tela se seu RA é par ou ímpar;
#include <stdio.h>

int main() {
    int RA_ult; // variavel para o ultimo do RA
    int par_impar; // variavel para comparação do ultimo numero por 2, para ver se há resto

    printf("Olá! Insira o último número do seu RA.\n"); // requisição para o RA
    
    printf("O último número do meu RA é:"); // local onde insere o ultimo numero do RA
    scanf("%d", &RA_ult); // armazena o dado

    par_impar = RA_ult % 2; // comparação para o resto da divisão por 2
        
    if ( par_impar == 0){
        printf("O último número do seu RA é um número par\n");}
    else { 
        printf("O último número do seu RA é um número ímpar\n");} 

    return 0;
}

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


//Lista dois  
#include <stdio.h>

void t(int *x, int *y) { // Função que troca os valores de duas variáveis, declara os ponteiros
    int temp = *x; //armazena o valor de x, na variável memoria
    *x = *y; //joga o valor de y na variável y
    *y = temp; //pega o valor armazenado e coloca na variavel temp
}

int main() {
    int a, b;

  printf("Digite o valor de a: "); //pra inserir o valor de a
    scanf("%d", &a); //armazena o valor inserido

    printf("Digite o valor de b: "); //pra inserir o valor de b
    scanf("%d", &b); //armazena o valor inserido
    
    t(&b, &a);  // chama a função de troca 

    printf("Depois da troca: a = %d, b = %d\n", a, b); //mostra os valores inseridos

    return 0;
}
