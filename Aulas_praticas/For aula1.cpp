#include <stdio.h>
int main() {
for (int i = 1; i <= 10; i++) {
printf("%d\n", i);
}
return 0;
}

-------------------------------------------------------------------------------------------------

#include <stdio.h>
int main() {
for (int i = 50; i >= 1; i--) {
printf("%d\n", i);
}
return 0;
}

------------------------------------------------------------------------------------------------

#include <stdio.h>
int main() {
int qnt_aln,n1,n2;
float med;

printf("Quantos alunos possuem na sala: ");
scanf("%d",&qnt_aln);

for (int i = 1; i <= qnt_aln; qnt_aln++) {
printf("Qual foi a nota 1 do aluno: \n");
scanf("%d",&n1);

printf("Qual foi a nota 2 do aluno: \n ");
scanf("%d",&n2);
med = (n1+n2)/2;
if (med >= 5) {
printf("Parabens voce foi aprovado :), sua media foi:%2.f \n", med);
} else { 
    ("Sinto muito, voce foi reprovado :(, sua media foi: %2.f \n",med);}
}
return 0;
}

