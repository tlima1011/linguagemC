#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{

    int n = 0, cont = 0, num;

    printf("Informe quantidade de numeros para primo: ");
    scanf("%d", &num);

    for(int j = 1; j < num; j++){
        cont = 0;
        for(int i = 1; i <= j; i++){
            if(j % i == 0){
                cont++;
            }
        }
        if(cont == 2){
            printf("%d ", j);
        }
    }
    printf("\n");
    getch();
    return 0;
}



