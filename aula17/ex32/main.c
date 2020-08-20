#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int codigo = 0, qtde = 0;
    double preco = 0, valorPagar = 0;
    char resp;

    printf("----------------------------------\n");
    printf("Restaurante Pesadelo na Cozinha\n");
    printf("         Cardapio Massa!\n");
    printf("----------------------------------\n");
    printf("Especificacao   Codigo   Preco\n");
    printf("----------------------------------\n");
    printf("Cachorro Quente   100    R$ 1.20\n");
    printf("Bauru Simples     101    R$ 1.30\n");
    printf("Bauru com ovo     102    R$ 1.50\n");
    printf("Hamburguer        103    R$ 1.20\n");
    printf("Cheeseburguer     104    R$ 1.30\n");
    printf("Refrigerante      105    R$ 1.00\n");
    printf("----------------------------------\n");

    do{
        printf("Informe o codigo: ");
        scanf("%d", &codigo);
        switch(codigo){
            case 100:
                printf("Quanto de cachorro quente: ");
                scanf("%d",&qtde);
                preco = qtde * 1.20;
                break;
            case 101:
                printf("Quanto de Bauru Simples: ");
                scanf("%d",&qtde);
                preco = qtde * 1.30;
                break;
            case 102:
                printf("Quanto de Bauru com Ovo: ");
                scanf("%d",&qtde);
                preco = qtde * 1.50;
                break;
            case 103:
                printf("Quanto de Hamburguer: ");
                scanf("%d",&qtde);
                preco = qtde * 1.20;
                break;
            case 104:
                printf("Quanto de Cheeseburguer: ");
                scanf("%d",&qtde);
                preco = qtde * 1.30;
                break;
            case 105:
                printf("Quanto de Refrigerante: ");
                scanf("%d",&qtde);
                preco = qtde * 1.00;
                break;
            default:
                printf("Invalido, digite novamente\n");

        }
        valorPagar += preco;
        printf("Deseja continuar [S/N]: ");
        fseek(stdin,0,SEEK_END);
        scanf("%c", &resp);
        resp = toupper(resp);
    }while(resp == 'S');
    printf("Valor a pagar R$%.2lf\n",valorPagar);

    getch();
    return 0;
}



