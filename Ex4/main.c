#include <stdio.h>
#include <stdlib.h>

int main()
{
    double media, nota1, nota2, nota3, nota4;

    printf("Informe a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Informe a segunda nota: ");
    scanf("%lf", &nota2);
    
    printf("Informe a terceira nota: ");
    scanf("%lf", &nota3);
    
    printf("Informe a quarta nota: ");
    scanf("%lf", &nota4);
    

    media = (nota1 + nota2 + nota3 + nota4) / 4.0;
    printf("A media = %.2lf", media);

    //gletch();
    return 0;
}
