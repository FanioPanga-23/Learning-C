#include <stdio.h>

int     main()
{
    char    nome[22];

    while (1)
    {
        puts("Digite o seu nome completo: ");
        gets(nome);
        if (nome[0] == '\0')
            break;
        printf("Nome completo: %s\n", nome);
        
    }
}