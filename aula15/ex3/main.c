#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    char sexo;

    printf("Informe o Sexo: [M/F] ");
    scanf("%s", &sexo);
    sexo = toupper(sexo);
    switch(sexo)
    {
    case 'M':
        printf("Sexo Masculino");
        break;
    case 'F':
        printf("Sexo Feminino");
        break;
    default:
        printf("Sexo Invalido");
    }
    return 0;
}
