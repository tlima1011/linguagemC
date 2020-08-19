#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma, num1, num2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);

    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    printf("A soma = %d", soma);

    //gletch();
    return 0;
}
