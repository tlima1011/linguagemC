#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    int dia = 0;

    printf("Valor do dia: ");
    scanf("%d",&dia);

    switch(dia){
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda");
        break;
    case 3:
        printf("Terca");
        break;
    case 4:
        printf("Quarta");
        break;
    case 5:
        printf("Quinta");
        break;
    case 6:
        printf("Sexta");
        break;
    case 7:
        printf("Sabado");
        break;
    default:
        printf("Invalido");
    }

    return 0;
}
