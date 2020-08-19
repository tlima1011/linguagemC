#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1, num2;
    double res1 = 0, res2 = 0, res3 = 0, num3 = 0;

    printf("Numero 1: ");
    scanf("%d", &num1);

    printf("Numero 2: ");
    scanf("%d", &num2);

    printf("Numero 3: ");
    scanf("%lf", &num3);

    res1 = num1 * 2 * (num2 / 2.0);
    res2 = num1 * 3 + num3;
    res3 = pow(num3,3);

    printf("Resultado 1: %.1lf\n", res1);
    printf("Resultado 2: %.1lf\n", res2);
    printf("Resultado 3: %.1lf", res3);

    //gletch();
    return 0;
}
