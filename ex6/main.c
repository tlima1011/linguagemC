#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double areaCirculo, raio;

    printf("Informe o raio do circulo: ");
    scanf("%lf", &raio);

    areaCirculo = 3.1415 * pow(raio, 2);

    printf("Area Circulo = %.2lf", areaCirculo);

    //gletch();
    return 0;
}
