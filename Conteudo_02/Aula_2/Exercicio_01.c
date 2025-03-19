// Dados os valores do raio de uma circunferência, e tomando
// pi = 3.141592, faça um programa em C que calcula o
// valor da área do círculo.
#include<stdio.h>
#include<math.h>
int main()
{
    const float pi=3.141592;
    float raio,area;
    printf("Vamos calcular a área do círculo em metros:/\nDigite o raio.\n");
    scanf("%f",&raio);
    area=pi*pow(raio,2);
    printf("A área do círculo é de %.f em metros quadrados",area);
    return 0;
}
