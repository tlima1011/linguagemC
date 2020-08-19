#include <stdio.h>
#include <stdlib.h>

int main()
{

    int menor = 0, maior = 0, n1 = 0, n2 = 0, n3 = 0;

    printf("Primeiro numero: ");
    scanf("%d",&n1);

    printf("Segundo numero: ");
    scanf("%d",&n2);

    printf("Terceiro numero: ");
    scanf("%d",&n3);

    if(n1 > n2 && n1 > n3){
        maior = n1;
    }else if(n2 > n3){
        maior = n2;
    }else{
        maior = n3;
    }

    if(n1 < n2 && n1 < n3){
        menor = n1;
    }else if(n2 < n3){
        menor = n2;
    }else{
        menor = n3;
    }


    printf("Maior numero %d\n", maior);
    printf("Menor numero %d", menor);

    return 0;
}
