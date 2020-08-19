#include <stdio.h>
#include <stdlib.h>

int main()
{

    double media = 0, nota1 = 0, nota2 = 0;

    printf("Primeira nota: ");
    scanf("%lf",&nota1);

    printf("Segunda nota: ");
    scanf("%lf",&nota2);

    media = (nota1 + nota2) / 2.0;

    if(media < 7){
        printf("Reprovado com media %.1lf", media);
    }else if(media < 10){
        printf("Aprovado com media %.1lf", media);
    }else{
        printf("Aprovado com distincao com media %.1lf", media);
    }


    return 0;
}
