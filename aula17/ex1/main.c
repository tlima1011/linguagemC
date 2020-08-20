double nota = 0;
    printf("Informe uma nota: ");
    do{
        scanf("%lf",&nota);
        if((nota < 0) || (nota > 10)){
            printf("Invalido, de 0 a 10: ");
        }
    }while((nota < 0) || (nota > 10));
    printf("Acesso permitido");

    return 0;
