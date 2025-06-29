#include <stdio.h>

int main(void)
{
    int nu = 1999;
    int nrev = 0;

    while (nu)
    {
        nrev = nrev * 10 + nu % 10;
        nu /= 10;
    }
    printf("N -> %d\n", nrev);
}