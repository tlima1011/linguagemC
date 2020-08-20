#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    double nota = 0, media = 0, soma = 0;
    int n = 0;

    printf("Informe o numero de notas: ");
    scanf("%d", &n);

    for(int i = 0; i < n;i++){
        printf("Informe a %d. nota: ", (i + 1));
        scanf("%lf",&nota);
        soma += nota;
    }
    media = soma / n;
    printf("Media = %.1lf",media);
    printf("\n");
    getch();
    return 0;
}
