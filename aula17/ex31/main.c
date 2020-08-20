#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int ano = 1995;
    double salario = 0, aumento = 0.015;

    printf("Salario R$");
    scanf("%lf",&salario);

    for(int i = ano; i<= 2020; i++){
        salario = salario + (salario * aumento);
    }
    printf("O salario final R$%.2lf\n",salario);

    getch();
    return 0;
}



