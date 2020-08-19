#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
int main()
{
    double soma, subtracao, num1 = 0, num2 = 0, multiplicacao, divisao;
    char tipo;

    printf("Informe o numero 1: ");
    scanf("%lf", &num1);

    printf("Informe o numero 2: ");
    scanf("%lf", &num2);

    printf("Qual tipo de operacao [+] / [-] / [*] / [/]: ");
    scanf("%s",&tipo);

    switch(tipo)
    {
    case '+':
        soma = num1 + num2;
        printf("A soma eh ");
        if(soma % 2.0 == 0)
        {
            printf("par ");
        }
        else
        {
            printf("impar ");
        }
        if(soma > 0)
        {
            printf(" e eh positivo");
        }
        else
        {
            printf(" e eh negativo");
        }
        break;
    case '-':
        subtracao = num1 - num2;
        printf("A subtracao eh ");
        if(subtracao % 2 == 0)
        {
            printf("par ");
        }
        else
        {
            printf("impar ");
        }
        if(subtracao > 0)
        {
            printf(" e eh positivo");
        }
        else
        {
            printf(" e eh negativo");
        }
        break;
    case '*':
        multiplicacao = num1 * num2;
        printf("A multiplicacao eh ");
        if(multiplicacao % 2 == 0)
        {
            printf("par ");
        }
        else
        {
            printf("impar ");
        }
        if(multiplicacao > 0)
        {
            printf(" e eh positivo");
        }
        else
        {
            printf(" e eh negativo");
        }
        break;
    case '/':
        divisao = num1 / num2;
        printf("A divisao eh ");
        if(divisao % 2 == 0)
        {
            printf("par ");
        }
        else
        {
            printf("impar ");
        }
        if(divisao > 0)
        {
            printf(" e eh positivo");
        }
        else
        {
            printf(" e eh negativo");
        }
        break;
    default:
        printf("Invalido");
    }
    return 0;
}
