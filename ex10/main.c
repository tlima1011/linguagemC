#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double c, f;

    printf("Temperatura celsius: ");
    scanf("%lf", &c);

    f = (c * 9/5.0) + 32;

    printf("Temperatura em farenheit %.1lf", f);

    //gletch();
    return 0;
}
