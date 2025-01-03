#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int temp_var;

    temp_var = *b;
    *b  = *a;
    *a = temp_var;

}

int main()
{
    int     x;
    int     y;

    x = 10;
    y = 20;

    ft_swap(&x, &y);
}