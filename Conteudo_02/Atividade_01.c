//  Faça um pseudocódigo(nesse caso código em c) que leia o nome de um produto
// (string), o preço e a quantidade comprada.
//  Escreva o nome do produto e o valor total a ser pago,
// considerando que são oferecidos descontos pelo
// número de unidades compradas, segundo a tabela
// abaixo:
//  Até 10 unidades: valor total (sem desconto)
//  De 11 a 20 unidades: 10% de desconto
//  De 21 a 50 unidades: 20% de desconto
//  Acima de 50 unidades: 25% de desconto
#include <stdio.h>
int main(void)
{   
    int unidades;
    float preco,tpreco;
    char nome[100];

    printf("Insira o nome do produto, o preço dele\n e a quantidade a ser comprada:\n");
    scanf("%c%f%d",&nome,&preco,&unidades);
    tpreco=preco*unidades;
    printf("O produto comprado foi %c.\nO preço total a pagar é de R$: %.2f.",nome,tpreco);

    return 0;
}
