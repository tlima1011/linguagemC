#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    char letra;

    printf("Informe a letra: ");
    scanf("%s", &letra);
    letra = toupper(letra);

    if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
        printf("A letra eh vogal");
    }else{
        printf("A letra eh consoante");
    }


    return 0;
}
