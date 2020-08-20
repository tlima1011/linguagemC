#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int cont = 0;
    double popA = 80000, popB = 200000, txA = 0.03, txB= 0.015;

    while(popA <= popB){
        popA = popA + (popA * txA);
        popB = popB + (popB * txB);
        cont++;
    }
    printf("A populacao de A atingir o B eh de %d anos",cont);

    return 0;
}
