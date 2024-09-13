#include <stdio.h>
#include <stdlib.h>
int main() {
float a; 
int b; 

printf("Insira o valor de a: \n",a);
scanf("%f",&a);
printf("Insira o valor de b: \n",b);
scanf("%d",&b);
  
a -= b; 
printf("a = %.1f\n", a);

a *= 4;
printf("a = %.1f\n", a);

a /= 3;
printf("a = %.1f\n", a);

a += 2;
printf("a = %.1f\n", a);

b%=5;
printf("b = %d\n", b);

return 0;

}
