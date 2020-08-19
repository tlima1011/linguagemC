#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int ano;
    printf("Informe o ano: ");
    scanf("%d", &ano);

    if(ano % 400 == 0 || ano % 4 == 0){
        printf("O ano eh bissexto");
    }else{
        printf("O ano nao eh bissexto");
    }


   return 0;
}
