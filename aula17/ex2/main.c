#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char usuario[30], senha[30];


    printf("Informe os dados:\n ");
    do{
        fseek(stdin,0,SEEK_END);
        printf("Informe usuario: ");
        gets(usuario);
        fseek(stdin,0,SEEK_END);
        printf("Informe senha: ");
        gets(senha);
        //usuario = toupper(usuario);
        //senha = toupper(senha);
        if(strcasecmp(usuario, senha) == 0){
            printf("Nome e usuario devem ser diferentes: \n");
        }
    }while(strcasecmp(usuario, senha) == 0);
    printf("Acesso permitido");

    return 0;
}
