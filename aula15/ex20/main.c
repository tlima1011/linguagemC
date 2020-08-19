#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
int main()
{
    char telefonou, local, perto, deve, trabalhou;
    int total = 0, pontoTelefonou = 0, pontoLocal = 0, pontoPerto = 0, pontoDeve = 0, pontoTrabalhou = 0;

    fseek(stdin,0,SEEK_END);
    printf("Telefonou para vitima? [S/N]? ");
    scanf("%c", &telefonou);
    telefonou = toupper(telefonou);

    fseek(stdin,0,SEEK_END);
    printf("Esteve no local do crime? [S/N]? ");
    scanf("%c", &local);
    local = toupper(local);

    fseek(stdin,0,SEEK_END);
    printf("Mora perto da vitima [S/N]? ");
    scanf("%c", &perto);
    perto = toupper(perto);

    fseek(stdin,0,SEEK_END);
    printf("Devia para vitima [S/N]? ");
    scanf("%c", &deve);
    deve = toupper(deve);

    fseek(stdin,0,SEEK_END);
    printf("Ja trabalhou com a vitima [S/N]? ");
    scanf("%c", &trabalhou);
    trabalhou = toupper(trabalhou);

    if(telefonou == 'S'){
        pontoTelefonou++;
    }
    if(local == 'S'){
        pontoLocal++;
    }
    if(perto == 'S'){
        pontoPerto++;
    }
    if(deve == 'S'){
        pontoDeve++;
    }
    if(trabalhou == 'S'){
        pontoTrabalhou++;
    }

    total = pontoTelefonou + pontoLocal + pontoPerto + pontoDeve + pontoTrabalhou;

    switch(total){
        case 5:
            printf("Assassino");
            break;
        case 3: case 4:
            printf("Cumplice");
            break;
        case 2:
            printf("Suspeita");
            break;
        default:
            printf("Inocente");
            break;
        }
    return 0;
}
