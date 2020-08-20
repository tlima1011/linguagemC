#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{

    int maior = 0, numero = 0, menor = 0;

    for(int i = 0; i < 5;i++){
        printf("Informe o %d. numero: ", (i + 1));
        scanf("%d", &numero);
        if (i == 0){
            maior = numero;
            menor = numero;
        }else{
            if(numero > maior){
                maior = numero;
            }
            if(numero < menor){
                menor = numero;
            }
        }
    }
    printf("O maior numero = %d\n",maior);
    printf("O menor numero = %d\n",menor);
    return 0;
}
