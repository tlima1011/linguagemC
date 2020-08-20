#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    double temp = 0, maior = 0, menor = 0, soma = 0, media = 0;
    int n;

    printf("Informe a quantidade de temperatura: ");
    scanf("%d", &n);

    for(int i = 0; i < n;i++){
        printf("Informe a %d. temperatura: ",(i+1));
        scanf("%lf", &temp);
        if(i == 0){
            maior = temp;
            menor = temp;
        }else{
            if(temp > maior){
                maior = temp;
            }
            if(temp < menor){
                menor = temp;
            }
        }
        soma += temp;
    }
    media = soma / n;
    printf("Maior Temperatura %.1lf\n",maior);
    printf("Menor Temperatura %.1lf\n",menor);
    printf("Media temperatura %.1lf\n",media);
    getch();
    return 0;
}


