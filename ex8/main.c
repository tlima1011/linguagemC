#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double salario, trabalhadas, valorHora;

    printf("Horas Trabalhadas: ");
    scanf("%lf", &trabalhadas);

    printf("Valor por hora R$");
    scanf("%lf", &valorHora);

    salario = trabalhadas * valorHora;

    printf("Salario = R$%.2lf", salario);

    //gletch();
    return 0;
}
