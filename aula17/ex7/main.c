#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{

    int maior = 0, numero = 0;

    for(int i = 0; i < 5;i++){
        printf("Informe o %d. numero: ", (i + 1));
        scanf("%d", &numero);
        
        if(numero > maior){
            maior = numero;
        }
    }
    printf("O maior numero = %d",maior);


    return 0;
}
