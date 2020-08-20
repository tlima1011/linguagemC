#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    double preco = 0.18;
    printf("Preco do Pao: R$%.2lf", preco);
    printf("Panificadora Pao de Ontem - Tabela de Preços:\n");
    for(int i = 1; i <= 50;i++){
        printf("%d - R$%.2lf\n",i,preco);
        preco += 0.18;
    }
    getch();
    return 0;
}
