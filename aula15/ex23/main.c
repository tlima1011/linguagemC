#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <conio.h>
int main()
{
    double precoTotal = 0, valorPagar = 0, desconto = 0, kgTotal = 0, kgFileDuplo = 0, kgAlcatra = 0, kgPicanha = 0, precoUnitarioFileDuplo = 0, precoUnitarioAlcatra = 0, precoUnitarioPicanha = 0, precoFileDuplo = 0, precoAlcatra = 0, precoPicanha = 0;
    char cartao;
    char cartao_extenso[5];

    printf("Kg File Duplo: ");
    scanf("%lf",&kgFileDuplo);

    printf("Kg de Alcatra: ");
    scanf("%lf",&kgAlcatra);

    printf("Kg de Picanha: ");
    scanf("%lf",&kgPicanha);

    if(kgFileDuplo <= 5){
        precoUnitarioFileDuplo = 4.90;
    }else{
        precoUnitarioFileDuplo = 5.80;
    }

    if(kgAlcatra <= 5){
        precoUnitarioAlcatra = 5.90;
    }else{
        precoUnitarioAlcatra = 6.80;
    }

    if(kgPicanha <= 5){
        precoUnitarioPicanha = 6.90;
    }else{
        precoUnitarioPicanha = 7.80;
    }

    precoFileDuplo = precoUnitarioFileDuplo * kgFileDuplo;
    precoAlcatra = precoUnitarioAlcatra * kgAlcatra;
    precoPicanha = precoUnitarioPicanha * kgPicanha;

    kgTotal = kgFileDuplo + kgAlcatra + kgPicanha;
    precoTotal = precoFileDuplo + precoAlcatra + precoPicanha;

    printf("Possui cartao Tabajara de descontos [S/N]? ");
    fseek(stdin,0,SEEK_END);
    scanf("%c", &cartao);
    cartao = toupper(cartao);
    if(cartao == 'S'){
        desconto = 0.05;
        fseek(stdin,0,SEEK_END);
        strcpy(cartao_extenso, "Sim");
    }else{
        fseek(stdin,0,SEEK_END);
        strcpy(cartao_extenso, "Nao");
    }
    valorPagar = precoTotal - (precoTotal * desconto);
    desconto *= 100;

    printf("ACOUGUE DE NADA\n");
    printf("Kg - File Duplo %.1lf - Preco R$%.2lf\n",kgFileDuplo, precoFileDuplo);
    printf("Kg - Alcatra %.1lf - Preco R$%.2lf\n",kgAlcatra, precoAlcatra);
    printf("Kg - Picanha %.1lf - Preco R$%.2lf\n",kgPicanha, precoPicanha);
    printf("Valor Total: R$%.2lf\n", precoTotal);
    printf("Cartao Tabajara [S/N] %s\n",cartao_extenso);
    printf("Desconto se houver: %.1lf%%\n",desconto);
    printf("Valor a pagar R$%.2lf\n",valorPagar);

    return 0;
}
