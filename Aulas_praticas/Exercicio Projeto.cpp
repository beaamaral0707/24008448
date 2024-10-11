#include <stdio.h> 
#include <locale.h>

int main (){
    
int num_modelo;
printf( "\tModelos disponíveis:\t \n");
printf("1. Fiat uno\n");
printf("2. Ford KA\n");
printf("3. Porsche GT3\n");
printf("4. Mustang 1970\n"); 
printf("5. Audi Q5\n");
printf("Escolha o modelo desejado(1-5): ");
scanf("%d", &num_modelo);
printf("\n");

setlocale(LC_ALL, "Portuguese");
// Exibir o preço e a especificacao com base na escolha
switch (num_modelo) {
case 1:
printf("Modelo: Fiat uno \n");
printf("Preco: R$27.000,00\n");
printf("Especificações: de cor branca, quatro portas, direcao hidraulica.\n");
break;
case 2:
printf("Produto: Borracha\n");
printf("Preco: R$ 1.00\n");
printf("Especificacao: Borracha branca, apaga lapis sem manchas.\n");
break;
case 3:
printf("Produto: Apontador\n");
printf("Preco: R$ 1.75\n");
printf("Especificacao: Apontador de plastico com deposito, cores variadas.\n");
break;
default:
printf("Erro: Produto invalido.\n");
break;
}
return 0;
}

//  utilizar da sintaxe de mudar o printf para Portugal
// strcmp








}
