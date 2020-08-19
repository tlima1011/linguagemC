#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double c, f;

    printf("Temperatura Farenheit: ");
    scanf("%lf", &f);

    c = (5 * (f-32)) / 9.0;

    printf("Temperatura em celsius %.1lf", c);

    //gletch();
    return 0;
}
