// O mesmo que pratica_02, porém com números reais
#include <stdio.h>
int main(void)
{
    float val1, val2, soma;
    printf("Digite fois valores para a soma:\n");
    scanf("%f%f",&val1,&val2);
    soma= val1+val2;
    printf("\nO resultado da soma de reais é igual a: %.2f",soma);
    return 0;
}
