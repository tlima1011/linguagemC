#include <stdio.h>
#include <stdlib.h>

int main()
{
    double media, nota1, nota2;

    printf("Informe a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Informe a segunda nota: ");
    scanf("%lf", &nota2);

    media = (nota1 + nota2) / 2.0;
    printf("A media = %.2lf", media);

    //gletch();
    return 0;
}
