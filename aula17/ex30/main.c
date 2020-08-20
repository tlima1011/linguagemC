#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{

    int produto = 0, tabuada = 0, num_inicio = 0, num_final = 0;

    printf("Montar a tabuada de : ");
    scanf("%d", &tabuada);

    do{
        printf("Comecar por: ");
        scanf("%d", &num_inicio);
        printf("Terminar em: ");
        scanf("%d", &num_final);
        if(num_inicio > num_final){
            printf("Invalido, numero inicial maior que final\n");
        }
    }while(num_inicio > num_final);
    printf("Vou montar tabuada de %d, comecando por %d e terminando em %d\n",tabuada,num_inicio,num_final);

    for(int i = num_inicio; i <= num_final;i++){
        produto = tabuada * i;
        printf("%d x %d = %d\n",tabuada,i,produto);
    }
    printf("\n");
    getch();
    return 0;
}



