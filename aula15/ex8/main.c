#include <stdio.h>
#include <stdlib.h>

int main()
{

    double menor = 0, preco1 = 0, preco2 = 0, preco3 = 0;

    printf("Primeiro preco R$");
    scanf("%lf",&preco1);

    printf("Segundo preco R$");
    scanf("%lf",&preco2);

    printf("Terceiro preco R$");
    scanf("%lf",&preco3);

    if(preco1 < preco2 && preco1 < preco3){
        menor = preco1;
    }else if(preco2 < preco3){
        menor = preco2;
    }else{
        menor = preco3;
    }

    printf("Mais barato R$%.2lf", menor);

    return 0;
}
