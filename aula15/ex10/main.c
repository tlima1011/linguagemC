#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char turno;

    printf("Informe o turno M - V - N: " );
    scanf("%s", &turno);
    turno = toupper(turno);

    switch(turno){
    case 'M':
        printf("Bom dia");
        break;
    case 'V':
        printf("Boa Tarde");
        break;
    case 'N':
        printf("Boa Noite");
        break;
    default:
        printf("Invalido");

    }

    return 0;
}
