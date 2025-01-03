#include <stdio.h>

int     main()
{
    /*char    caractere = 'a';
    char    string [] = "a";*/
    char    nome[20];
    char    sobrenome[18];
    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("Digite o seu sobrenome: ");
    scanf("%s", sobrenome);

    printf("Nome: %s\nSobrenome: %s\n", nome, sobrenome);
}