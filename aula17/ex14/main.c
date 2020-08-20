#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{

    int pares = 0, impares = 1, num = 0;

    for(int i = 0; i < 9;i++){
        printf("Informe o %d. numero: ",(i + 1));
        scanf("%d",&num);
        if(num % 2 == 0){
            pares++;
        }else{
            impares++;
        }
    }
    printf("\nNumeros pares = %d\n", pares);
    printf("Numeros impares = %d\n", impares);
    getch();
    return 0;
}
