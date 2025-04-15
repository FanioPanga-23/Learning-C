#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int aux_var;

    aux_var = *a;

    *a = *a / *b;
    *b = aux_var % *b;

    printf("Div: %d\nMod: %d\n", *a, *b);
}

int main()
{
    int a = 7;
    int b = 2;

    ft_ultimate_div_mod(&a, &b);
}