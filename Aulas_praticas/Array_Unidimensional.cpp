#include <stdio.h>
#include <stdlib.h>
int main() {
float notas[5], media=0.0, soma=0.0;
int i;
// Repetição do loop para capturar as notas
for(i=0; i<5; i++){
printf("Digite a nota do aluno %d: ", i);
scanf("%f", &notas[i]);
soma = soma + notas[i];
}
// Cálculo da média
media = soma/5;
printf("A média da turma foi: %.1f\n\n", media);
// Verificar as notas acima da média
printf("Alunos acima da media: \n");
for(i=0; i<5; i++){
if(notas[i] > media)
printf("Aluno %d: %.1f\n", i, notas[i]);
}
return 0;
}
