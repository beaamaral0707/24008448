#include <stdio.h> 
#include <locale.h>

float v_carro1, v_carro2,v_carro3,v_carro4,v_carro5;

int main (){
v_carro1 = 27.846;
    
int num_modelo, mod_pag;
printf( "\tModelos disponíveis:\t \n");
printf("1. Fiat uno\n");
printf("2. Ford KA\n");
printf("3. Porsche GT3\n");
printf("4. Mustang 1970\n"); 
printf("5. Audi Q5\n");
printf("Escolha o Modelo desejado(1-5): ");
scanf("%d", &num_modelo);
printf("\n");

printf( "\tModo de pagamento:\t \n");
printf("1. À vista: \n");
printf("2. Parcelamento com entrada: \n");
printf("3. Parcelamento sem entrada:  \n");
printf("Escolha o modo de pagamento desejado (1-3): ");
scanf("%d", &mod_pag);
printf("\n");

setlocale(LC_ALL, "Portuguese");
// Exibir o preço e a especificacao com base na escolha
switch (num_modelo) {
case 1:
printf("Modelo: Fiat uno \n");
printf("Preco: R$ 27.000,00\n");
printf("Especificações: de cor branca, quatro portas, direção hidraulica.\n");
break;
case 2:
printf("Modelo: Fort KA\n");
printf("Preco: R$\n");
printf("Especificações: , apaga lapis sem manchas.\n");
break;
case 3:
printf("Modelo: Porsche GT3\n");
printf("Preco: R$ \n");
printf("Especificações: , cores variadas.\n");
break;
case 4:
printf("Modelo: Mustang 1970\n");
printf("Preco: R$ \n");
printf("Especificações: , cores variadas.\n");
break;
case 5:
printf("Modelo: Audi Q5\n");
printf("Preco: R$ \n");
printf("Especificações: , cores variadas.\n");
break;
    
default:
printf("Erro: Modelo inválido.\n");
break;
}

// Entrada minima sendo 20% do valor do carro
    
switch (mod_pag) {
case 1:
printf("Modo de pagamento selecionado: À vista.\n");
break;
case 2:
printf("Modo de pagamento selecionado: Parcelado com valor de entrada:\n");
break;
case 3:
printf("Modo de pagamento escolhido: Parcelado sem valor de entrada:\n");
break;
    
default:
printf("Erro: Modo de pagamento selecionada inválido!.\n");
break;  
}

if ((mod_pag == 2) || (mod_pag == 3)) {
    printf("Em caso de financiamento, o cliente deve escolher a quantidade de parcelas,dentre as opções a seguir.\n");
    printf("Parcelamento em 12x\n");
    printf("Parcelamento em 24x\n");
    printf("Parcelamento em 36x\n");
} else {
    printf("Beatriz Amaral");
}  
    
return 0;
}

//  utilizar da sintaxe de mudar o printf para Portugal
// strcmp

