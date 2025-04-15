#include <stdio.h>

void     ft_startVet(int   inV[], int n)
{
    int     i;

    i = 0;
    while (i < n)
    {
        inV[i] = 0;
        i++;
    }
}

int     main()
{
    int     v[10];
    int     x[20];

    ft_startVet(v, 10);
    ft_startVet(x, 20);

    printf("%d\n", v[2]);
}