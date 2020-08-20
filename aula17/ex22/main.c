#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    double soma = 0, precoCD;
    int n = 0;

    printf("Informe a quantidade de CDs: ");
    scanf("%d", &n);

    for(int i = 0; i < n;i++){
        printf("Preco do %d. CD: ",(i + 1));
        scanf("%lf",&precoCD);
        soma += precoCD;
    }
    printf("Quantidade CDs = %d\n", n);
    printf("Soma de preco R$%.2lf",soma);
    getch();
    return 0;
}
