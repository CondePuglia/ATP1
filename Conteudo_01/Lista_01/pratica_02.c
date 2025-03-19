//soma de números inteiros
#include <stdio.h>

int main(void)
{
    int val1, val2,soma;
    printf("Digite os valores 1 e 2, respectivamente\n");
    scanf("%d%d",&val1,&val2);
    soma= val1+val2;
    printf("\nO resultado da soma de inteiros é igual a:%d",soma);
    return 0;
}
