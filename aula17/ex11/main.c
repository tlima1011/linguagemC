#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{

    int troca = 0, num1 = 0, num2 = 0, soma = 0;
    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    if(num1 > num2){
        troca = num1;
        num1 = num2;
        num2 = troca;
    }

    for(int i = num1; i < num2;i++){
        //i++;
        if(i == num1){
            i++;
            printf("%d ", i);
        }else{
            printf("%d ", i);
        }
        soma += i;
    }
    printf("\nSoma = %d", soma);
    getch();
    return 0;
}
