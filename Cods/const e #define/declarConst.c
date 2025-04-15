#include <stdio.h>

const   int     it = 10;

void    startV(int vet[])
{
    int     i;

    i = 0;
    while (i < it)
    {
        vet[i] = 2;
        i++;
    }
}

int     main()
{
    int     vetor[it];

    startV(vetor);
    printf("%d\n", vetor[5]);
}