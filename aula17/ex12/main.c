#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{

    int numero = 0, produto = 0;
    printf("Montar tabuada: ");
    scanf("%d", &numero);
    printf("Tabuada de: %d\n",numero);

    for(int i = 1; i <= 10;i++){
        produto = numero * i;
        printf("%d x %d = %d\n",numero,i,produto);
    }

    getch();
    return 0;
}
