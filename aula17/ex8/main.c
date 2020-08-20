#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{

    int soma = 0, numero = 0;
    double media = 0;

    for(int i = 0; i < 5;i++){
        printf("Informe o %d. numero: ", (i + 1));
        scanf("%d", &numero);
        soma += numero;
    }
    media = soma / 5.0;
    printf("A media numero = %.1lf\n",media);
    return 0;
}
