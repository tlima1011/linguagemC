#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{

    int n = 0, cont = 0;

    printf("Informe o numero para primo: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cont++;
        }
    }
    if(cont == 2){
        printf("Eh numero primo");
    }else{
        printf("Nao Eh numero primo");
    }
    printf("\n");
    getch();
    return 0;
}
