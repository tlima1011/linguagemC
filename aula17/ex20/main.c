#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    double media = 0, soma = 0;
    int n = 0, idade = 0;

    printf("Informe o numero de idades: ");
    scanf("%d", &n);

    for(int i = 0; i < n;i++){
        printf("Informe a %d. idade: ", (i + 1));
        scanf("%d",&idade);
        soma += idade;
    }
    media = soma / n;
    printf("Media de Idades = %.1lf\n",media);

    if(media >= 0 && media <= 25){
        printf("A populacao eh jovem");
    }else if(media <= 60){
        printf("A populacao eh adulta");
    }else{
        printf("A populacao eh idosa");
    }
    printf("\n");
    getch();
    return 0;
}
