#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double link = 0, tamanho = 0, tempo;

    printf("Tamanho do arquivo em MB: ");
    scanf("%lf", &tamanho);

    printf("Link de Internet: ");
    scanf("%lf", &link);

    tempo = tamanho / link;
    printf("Tempo de download %.2lf min\n", tempo);

    //gletch();
    return 0;
}
