#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
int main()
{
    double precoTotal = 0, valorPagar = 0, desconto = 0, kgTotal = 0, kgMorango = 0, kgMaca = 0, precoUnitarioMorango = 0, precoUnitarioMaca = 0, precoMorango = 0, precoMaca = 0;

    printf("Kg de Morango: ");
    scanf("%lf",&kgMorango);

    printf("Kg de maca: ");
    scanf("%lf",&kgMaca);

    if(kgMorango <= 5){
        precoUnitarioMorango = 2.50;
    }else{
        precoUnitarioMorango = 2.20;
    }

    if(kgMorango <= 5){
        precoUnitarioMaca = 1.80;
    }else{
        precoUnitarioMaca = 1.50;
    }

    precoMorango = precoUnitarioMorango * kgMorango;
    precoMaca = precoUnitarioMaca *kgMaca;
    kgTotal = kgMorango + kgMaca;
    precoTotal = precoMorango + precoMaca;

    if(precoTotal >= 15 || kgTotal){
        desconto = 0.10;
    }
    valorPagar = precoTotal - (precoTotal * desconto);
    desconto *= 100;

    printf("QUINTANDA DE NADA\n");
    printf("Kg - Morango %.1lf - Preco R$%.2lf\n",kgMorango,precoMorango);
    printf("Kg - Maca %.1lf - Preco R$%.2lf\n", kgMaca, precoMaca);
    printf("Valor Total: R$%.2lf\n", precoTotal);
    printf("Desconto se houver: %.1lf%%\n",desconto);
    printf("Valor a pagar R$%.2lf",valorPagar);


    return 0;
}
