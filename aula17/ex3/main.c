#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char nome[30];
    int idade = 0;
    double salario = 0;
    char sexo;
    char estadoCivil;


    printf("Informe os dados:\n ");
    do{
        fseek(stdin,0,SEEK_END);
        printf("Informe o nome: ");
        gets(nome);
        //usuario = toupper(usuario);
        //senha = toupper(senha);
        if(strlen(nome) < 3 ){
            printf("Nome nao pode ser menor que 3: \n");
        }
    }while((strlen(nome) < 3));

    printf("Informe a idade: ");
    do{
        scanf("%d", &idade);
        if (idade < 0 || idade > 150){
            printf("Invalido, informe idade entre 0 e 150: ");
        }
    }while(idade < 0 || idade > 150);

    printf("Informe o salario em R$");
    do{
        scanf("%lf", &salario);
        if(salario < 0){
           printf("Invalido, informe salario maior que 0 -R$");
        }
    }while(salario < 0);

    printf("Informe o sexo [M/F]: ");
    do{
        fseek(stdin,0,SEEK_END);
        scanf("%c", &sexo);
        sexo = toupper(sexo);
        if((sexo != 'M') && (sexo != 'F')){
            printf("Invalido, informe sexo M/F");
        }
    }while((sexo != 'M') && (sexo != 'F'));

    printf("Informe o estado civil s - c - v - d: ");
    do{
        fseek(stdin,0,SEEK_END);
        scanf("%c", &estadoCivil);
        estadoCivil = toupper(estadoCivil);
        if((estadoCivil != 'S') && (estadoCivil != 'C') && (estadoCivil != 'V') && (estadoCivil != 'D')){
            printf("Invalido, Estado Civil s - c - v - d: ");
        }
    }while((estadoCivil != 'S') && (estadoCivil != 'C') && (estadoCivil != 'V') && (estadoCivil != 'D'));
    printf("Acesso permitido");

    return 0;
}
