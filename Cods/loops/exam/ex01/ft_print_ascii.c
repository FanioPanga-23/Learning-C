#include <stdio.h>
const int N = 255;

void	ft_print_ascii(void)
{
	int	i;

	i = 0;
	while (i <= N)
	{
		printf("%d -> %c\n", i, (char) i);
		i++;
	}
}

int	main(void)
{
	ft_print_ascii();
}
