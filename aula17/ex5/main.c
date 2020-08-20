#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int cont = 0, popA = 0, popB = 0;
    double txA = 0, txB= 0;


    do{
        printf("Informe a populacao de A: ");
        scanf("%d", &popA);
        printf("Taxa de crescimento de A: ");
        scanf("%lf", &txA);
        printf("Informe a populacao de B: ");
        scanf("%d", &popB);
        printf("Taxa de crescimento de B: ");
        scanf("%lf", &txB);
        if(popB < popA){
            printf("Invalido, a populacao de A nao pode superar de B: ");
        }
    }while(popB < popA);

    while(popA <= popB){
        popA = popA + (popA * txA);
        popB = popB + (popB * txB);
        cont++;
    }
    printf("A populacao de A atingir o B eh de %d anos",cont);

    return 0;
}
