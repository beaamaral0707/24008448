#include <stdio.h>

int main () {
int N_atual,Quantidade,visitantes;
  printf("Informe a atual quantidade de visitantes:%d",N_atual);
    scanf("%d",&N_atual);

  printf("Informe quantos visitantes entraram:%d",visitantes);
    scanf("%d", &visitantes);
    
  Quantidade = N_atual + visitantes;
  printf("O total de visitantes é:%d",Quantidade);
    scanf("%d",&Quantidade);
  printf( "Número de visitantes atualizado");
    
return 0;
}
