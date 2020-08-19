#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    double valorHora = 0, salario = 0, novoSalario = 0, perc_ir = 0, perc_inss = 0.10, perc_fgts = 0.11, perc_sindicato = 0.03;
    double descontos = 0, ir = 0, inss = 0, fgts = 0, sindicato = 0;

    int horasTrabalhadas = 0;

    printf("Valor por hora R$");
    scanf("%lf",&valorHora);

    printf("Horas trabalhadas: ");
    scanf("%d",&horasTrabalhadas);

    salario = horasTrabalhadas * valorHora;

    if(salario <= 900){
        perc_ir = 0;
    }else if(salario <= 1500){
        perc_ir = 0.05;
    }else if(salario <= 2500){
        perc_ir = 0.10;
    }else{
        perc_ir = 0.20;
    }

    sindicato = salario * perc_sindicato;
    fgts = salario * perc_fgts;
    inss = salario * perc_inss;
    ir = salario * perc_ir;
    descontos = inss + ir;
    novoSalario = salario - descontos;

    printf("Salario bruto: (%d * %.2lf):    R$ %.2lf\n", horasTrabalhadas, valorHora, salario);
    printf("IR (%.2lf%%):    R$%.2lf%\n", perc_ir * 100,ir);
    printf("INSS (%.1lf%%):   R$%.2lf%\n", perc_inss * 100,inss);
    printf("FGTS (%.1lf%%):  R$%.2lf%\n", perc_fgts * 100,fgts);
    printf("Total de descontos: R$%.2lf\n",descontos);
    printf("Salario Liquido: R$%.2lf\n", novoSalario);

    return 0;
}
