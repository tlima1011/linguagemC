#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n1 = 0, n2 = 0, maior = 0;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);

    printf("Informe o segundo numero: ");
    scanf("%d", &n2);

    if(n1 > n2){
        maior = n1;
    }else{
        maior = n2;
    }

    printf("O Maior %d", maior);
    return 0;
}
