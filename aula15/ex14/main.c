#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    double media = 0, nota1 = 0, nota2 = 0;
    char conceito;

    printf("Nota 1: ");
    scanf("%lf",&nota1);

    printf("Nota 2: ");
    scanf("%lf",&nota2);

    media = (nota1 + nota2) / 2.0;

    if(media >= 0 && media <= 4){
       conceito = 'E';
    }else if(media <= 6){
        conceito = 'D';
    }else if(media <= 7.5){
        conceito = 'C';
    }else if(media <= 9){
        conceito = 'B';
    }else{
        conceito = 'A';
    }
    printf("Media %.1lf\n", media);
    printf("Conceito: %c\n", conceito);
    switch(conceito){
    case 'E': case 'D':
        printf("REPROVADO");
        break;
    default:
        printf("APROVADO");
    }
    return 0;
}
