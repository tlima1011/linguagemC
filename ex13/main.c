#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double valorHora = 0, salario = 0, descontos = 0, inss = 0.08, sindicato = 0.05, ir = 0.11;
    int horasTrabalhadas = 0;

    printf("Informe o ganho por hora em R$");
    scanf("%lf", &valorHora);

    printf("Horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    salario = valorHora * horasTrabalhadas;
    sindicato = salario * sindicato;
    inss = salario * inss;
    ir = salario * ir;
    descontos = ir + sindicato + inss;

    printf("Salario Bruto: R$%.2lf\n", salario);
    printf("Sindicato: R$%.2lf\n", sindicato);
    printf("INSS: R$%.2lf\n", inss);
    printf("IR: R$%.2lf\n", ir);
    printf("Descontos: R$%.2lf\n", descontos);
    salario = salario - descontos;
    printf("Salario: R$%.2lf\n", salario);

    //gletch();
    return 0;
}
