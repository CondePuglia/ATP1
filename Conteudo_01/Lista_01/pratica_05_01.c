// calcular a média de N números reais e mostrar resultado obtido.
// mostar se é maior ou igual a 5 ou não
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int QuantidadeNotas,i;
    printf("Digite o número inteiro de notas que você quer\n para calcular sua média aritmética.");
    scanf("%d",&QuantidadeNotas);
    float Notas[QuantidadeNotas],Media;
    for ( i = 0; i < QuantidadeNotas; i++)
    {
        printf("Digite a sua nota %d\n",i+1);
        scanf("%f",&Notas[i]);
        Media+= Notas[i]; 
    }
    Media= Media/QuantidadeNotas;
    printf("A média final é igual a %.2f ",Media);
    return 0;
}
