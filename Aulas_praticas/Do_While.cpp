#include <stdio.h>
int main() {
int escolha;
// Exibir o menu de produtos
printf("Menu de Produtos:\n");
printf("1. Caneta\n");
printf("2. Borracha\n");
printf("3. Apontador\n");
do {
printf("Escolha um produto (1-3): ");
scanf("%d", &escolha);
} while ((escolha < 1) || (escolha >3));

switch (escolha) {
case 1:
printf("Produto: Caneta\n");
printf("Preco: R$ 2.50\n");
printf("Especificacao: Caneta esferografica azul, escrita suave.\n");
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
}
return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h> 
#include <locale.h>

double v_carro1, v_carro2,v_carro3,v_carro4,v_carro5;

int main (){
v_carro1 = 27.846;
    
int num_modelo, mod_pag,qnt_parc,v_parc;

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
printf("Preco: R$ %lf \n")v_carro1;
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
    printf("Parcelamento em 12x com juros de 0.7\n");
    printf("Parcelamento em 24x com juros de 1.5\n");
    printf("Parcelamento em 36x com juros de 1.5\n");
    printf("Quantidade de parcelas possíveis: \n");
    scanf("%d", &qnt_parc);
       do { 
       (v_carro1/12)*1.7 = v_parc;
       printf("Valor das parcelas do carro será de: %d",v_parc);
       } while (qnt_parc>12);

} else {
    printf("Beatriz Amaral");
}  
    
return 0;
}








































