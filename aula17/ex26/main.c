#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{

    int n = 0, f = 1;

    printf("Informe o Fatorial N: ");
    scanf("%d", &n);
    printf("%d! = ",n);
    for(int i = n; i >= 1;i--){
        if(i > 1){
            printf("%d . ",i);
        }else{
            printf("%d ",i);
        }
        f *= i;
    }
    printf(" = %d", f);
    printf("\n");
    getch();
    return 0;
}


