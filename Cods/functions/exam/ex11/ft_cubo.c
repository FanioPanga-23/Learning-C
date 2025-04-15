#include <stdio.h>
#define LIM 3

int   ft_cubo(int x)
{
        int     i;
        int	 cub;

        i = 1;
        cub = 1;
        while (i <= LIM)
        {
                cub *= x;
                i++;
        }
        return (cub);
}

int	main(void)
{
	printf("%d\n", ft_cubo(8));
}
