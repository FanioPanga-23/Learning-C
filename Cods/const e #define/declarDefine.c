#include <stdio.h>

#define IT 10

void    startV(int vet[])
{
    int     i;

    i = 0;
    while (i < IT)
    {
        vet[i] = 0;
        i++;
    }
}

int     main()
{
    int     tor[IT];

    startV(tor);
    printf("%d\n", tor[4]);
}