#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    double media = 0, soma = 0;
    int n = 0, alunos = 0;

    printf("Informe a quantidade de turmas: ");
    scanf("%d", &n);

    for(int i = 0; i < n;i++){
        printf("Informe alunos da %d. turma: \n", (i + 1));
        do{
            printf("Quantidade de alunos: ");
            scanf("%d",&alunos);
            if(alunos > 40){
                printf("Nao pode der maior que 40 alunos\n");
            }
        }while(alunos > 40);
        soma += alunos;
    }
    media = soma / n;
    printf("Media de alunos por turma = %.1lf\n",media);
    getch();
    return 0;
}
