#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    double preco = 0, soma = 0, dinheiro = 0, troco = 0, valor = 0;
    int i = 1;
    printf("Lojas Tabajara\n");
    do{
        printf("Produto %d: R$",i++);
        scanf("%lf", &preco);
        soma += preco;
    }while(preco != 0);
    printf("Valor com dinheiro R$");
    scanf("%lf", &dinheiro);
    troco = dinheiro - soma;
    printf("Total R$%.2lf\n", soma);
    printf("Dinheiro R$%.2lf\n", dinheiro);
    printf("Troco R$%.2lf\n", troco);

    getch();
    return 0;
}
