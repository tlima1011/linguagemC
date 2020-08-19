#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    double r1 = 0, r2 = 0, r3 = 0;
    char tipo[50];
    char formacao[50];

    printf("Reta 1: ");
    scanf("%lf",&r1);

    printf("Reta 2: ");
    scanf("%lf",&r2);

    printf("Reta 3: ");
    scanf("%lf",&r3);

    if((r1 < r2 + r3) || (r2 < r1 + r3) || (r3 < r1 + r2)){
            //strcpy(formacao, "Forma um triangulo do ");
            if(r1 == r2 && r2 == r3){
                strcpy(formacao,"Forma um triangulo do tipo Equilatero");
            }else if (r1 != r2 && r2 != r3){
                strcpy(formacao,"Forma um triangulo do tipo Escaleno");
            }else{
                strcpy(formacao,"Forma um triangulo do tipo Isósceles");
            }
    }else{
        strcpy(formacao, "Nao forma um triangulo ");
    }

    printf(formacao);


    return 0;
}
