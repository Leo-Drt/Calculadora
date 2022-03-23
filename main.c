#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int soma;
    int divisao;
    int mult;
    int subitracao;
    int i=0;
    printf("***Calculadora***\n");
    printf("Escolha as operacoes abaixo:\n");
    printf("(1)Soma (2)Subitracao (3)multiplicacao (4)Divisao\n");
    scanf("%d",&i);
    switch(i){
    case 1:
        printf("Voce escolheu soma\n");
        scanf("%d\n",&a);
        scanf("%d",&b);
        soma= a+b;
        printf("%d + %d = %d",a,b,soma);
        break;

    case 2:
        printf("Voce escolheu subtracao\n");
        scanf("%d\n",&a);
        scanf("%d",&b);
        subitracao= a-b;
        printf("%d - %d = %d",a,b,subitracao);
        break;

    case 3:
        printf("Voce escolheu multiplicacao\n");
        scanf("%d\n",&a);
        scanf("%d",&b);
        mult= a*b;
        printf("%d x %d = %d",a,b,mult);
        break;

    case 4:
        printf("Voce escolheu divisao\n");
        scanf("%d\n",&a);
        scanf("%d",&b);
        double divisao= (double)a/(double)b;
        printf("%f / %f = %f",(double)a,(double)b,(double)divisao);
        break;

        }


    return 0;
}
