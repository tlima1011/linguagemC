#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero;
    printf("Informe o numero: ");
    scanf("%d", &numero);

    if(numero % 2 == 0 || numero % 2 == 0){
        printf("O numero eh par");
    }else{
        printf("O numero impar");
    }

   return 0;
}
