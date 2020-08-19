#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    double salario = 0, aumento = 0, novoSalario = 0, perc_aumento = 0;

    printf("Valor do salario R$");
    scanf("%lf",&salario);

    if(salario <= 280){
        perc_aumento = 0.20;
    }else if(salario <= 700){
        perc_aumento = 0.15;
    }else if(salario <= 1500){
        perc_aumento = 0.10;
    }else{
        perc_aumento = 0.05;
    }

    aumento = salario * perc_aumento;
    novoSalario = aumento + salario;
    perc_aumento *= 100;

    printf("Salario atual R$ %.2lf\n", salario);
    printf("Aumento R$%.2lf\n", aumento);
    printf("Porcentagem %.1lf%%\n", perc_aumento);
    printf("Novo salario R$%.2lf\n", novoSalario);

    return 0;
}
