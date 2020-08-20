#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    double preco = 1.99;

    printf("Lojas Quase dois - Tabela de Precos \n");
    for(int i = 1; i <= 50;i++){
        printf("%d - R$%.2lf\n",i,preco);
        preco += 1.99;
    }
    getch();
    return 0;
}
