#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double area, lado;

    printf("Informe o lado do quadrado: ");
    scanf("%lf", &lado);

    area = lado * lado;

    printf("Area = %.2lf", area);

    //gletch();
    return 0;
}
