// Dado um número de três algarismos N = CDU (em que C é
    // o algarismo das centenas, D é o algarismo das dezenas e U o
    // algarismo das unidades). Considere o número M, constituído
    // pelos algarismos de N em ordem inversa, isto é, M = UDC.
    // 
    //  Gerar M a partir de N (ex: N = 123 ➔ M = 321).
    // 
    //  Dica: Usar operador que calcula o resto de uma divisão
    // inteira: %
#include<stdio.h>
int main(void)
{
    int n,d,c,u,m;
    printf("Digite um número inteiro de no máximo três casas\n");
    scanf("%d",&n);
    m=n;
    m=m%100;
    c=(n-m)/100;
    u= m%10;
    d=(m-u)/10;
    m=(u*100)+(d*10)+(c);
    printf("O número gerado é:\n%d",m);
    return 0;
}


