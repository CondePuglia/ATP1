// Faça um algoritmo que leia uma temperatura (em Fahrenheit), e a
// apresente convertida em graus Celsius.
// 
//  A fórmula de conversão é
// 
// C = (5*F – 160)/9,
// 
// em que F é a temperatura em Fahrenheit, e C é a temperatura em
// Celcius.
#include<stdio.h>
int main(void)
{
    float temperatura;

    printf("Digite uma temperatura em Fahrenheit(-459 a 212):\n");
    scanf("%f",&temperatura);
    temperatura = (5*temperatura-160)/9;
    printf("\nA temperatura em graus Celsius é de:%f", temperatura);
    return 0;
}
