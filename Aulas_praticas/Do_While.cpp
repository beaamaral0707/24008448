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
