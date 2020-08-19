#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n = 0;

    printf("Informe um numero: ");
    scanf("%d", &n);

    if(n > 0){
        printf("O numero eh positivo");
    }else{
        printf("O numero eh negativo");
    }


    return 0;
}
