#include <stdio.h>
#include <stdlib.h>

int main()
{
    double m, cm;

    printf("Informe o valor em m: ");
    scanf("%lf", &m);

    cm = m * 100;

    printf("Valor = %.1lfcm", cm);

    //gletch();
    return 0;
}
