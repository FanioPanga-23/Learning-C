#include <stdio.h>

int     sum(int k);

int     main(void)
{
    int res = sum(10);
    
    printf("%d\n", res);
    return (0);
}

int     sum(int k)
{
    if (k > 0)
        return (k + sum(k - 1));
    else
        return (0);
}