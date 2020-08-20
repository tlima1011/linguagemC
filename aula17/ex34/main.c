#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int n, num = 1, den = 1, somaTotal = 0, somaNum = 0, somaDen = 0;

    printf("Digite o numero de termos: ");
    scanf("%d",&n);

    printf("H = ", num);
    for(int i = 1; i <= n;i++){
        somaNum += num;
        printf("%d/%d", num, den);
        if(i < n){
            printf(" + ");
        }
        den++;
        somaDen += den;
        somaTotal = somaNum + somaDen;
    }
    printf(".");
    printf("\nSoma Numerador = %d\n",somaNum);
    printf("Soma Denominador = %d\n",somaDen);
    printf("Soma Total = %d\n",somaTotal);
    getch();
    return 0;
}



