#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double altura = 0, pesoIdeal = 0;


    printf("Informe a Altura: ");
    scanf("%lf", &altura);

    pesoIdeal = (72.7 * altura) - 58;

    printf("Peso ideal: %.1lf\n", pesoIdeal);

    //gletch();
    return 0;
}
