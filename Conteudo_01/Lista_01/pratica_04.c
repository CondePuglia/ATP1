// calcular a média de dois números reais e mostrar resultado obtido.
// mostar se é maior ou igual a 5 ou não
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float val1,val2,media;
    printf("Coloque duas entradas de valores reais\npara que seja calculada sua media:\n");
    scanf("%f%f",&val1,&val2);
    media= (val1+val2)/2;
    if (media>=5)printf("Aprovado com nota igual a\n%.2f",media);
    else printf("Reprovado com nota igual a\n%.2f",media);   
    return 0;
}

