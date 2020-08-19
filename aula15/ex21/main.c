#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
int main()
{
    char tipoCombustivel;
    double descontoGasolina = 0, litrosAlcool = 0, litrosGasolina = 0, descontoAlcool, precoAlcool, precoUnitarioAlcool = 0, precoGasolina = 0, precoUnitarioGasolina = 0;

    printf("Informe o tipo de combustivel\n[A] - Alcool\n[G] - Gasolina:  ");
    fseek(stdin,0,SEEK_END);
    scanf("%c", &tipoCombustivel);
    tipoCombustivel = toupper(tipoCombustivel);

    switch(tipoCombustivel){
        case 'A':
            printf("Litros de Combustivel Alcool: ");
            scanf("%lf",&litrosAlcool);
            precoUnitarioAlcool = 1.90;
            if(litrosAlcool < 20){
                descontoAlcool = 0.03;
            }else{
                descontoAlcool = 0.05;
            }
            precoUnitarioAlcool = precoUnitarioAlcool * litrosAlcool;
            precoAlcool = precoUnitarioAlcool - (precoUnitarioAlcool * descontoAlcool);
            printf("Preco Alcool R$%.2lf", precoAlcool);
            break;
        case 'G':
            printf("Litros de Combustivel Gasolina: ");
            scanf("%lf",&litrosGasolina);
            precoUnitarioGasolina = 2.50;
            if(litrosGasolina < 20){
                descontoGasolina = 0.04;
            }else{
                descontoGasolina = 0.06;
            }
            precoUnitarioGasolina = precoUnitarioGasolina * litrosGasolina;
            precoGasolina = precoUnitarioGasolina - (precoUnitarioGasolina * descontoGasolina);
            printf("Preco Gasolina R$%.2lf", precoGasolina);
            break;
        default:
            printf("Invalido");

    }

    return 0;
}
