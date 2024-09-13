#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14

int main()
{
float raio, area;
printf("Digite o raio \n");
scanf("%f", &raio);
area = 3.14 * pow(raio,2);
printf("Area total do circulo: %g \n", area);
return 0;
}
