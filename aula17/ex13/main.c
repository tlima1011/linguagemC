#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{

    int potencia = 1, base = 0, expoente = 0;
    printf("Informar base: ");
    scanf("%d", &base);

    printf("Informe o expoente: ");
    scanf("%d", &expoente);

    for(int i = 1; i <= expoente;i++){
        potencia *= base;
    }
    printf("Potencia = %d", potencia);
    getch();
    return 0;
}
