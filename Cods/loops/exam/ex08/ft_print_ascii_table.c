#include <stdio.h>
const	int	NCH = 255;

void	ft_print_ascii_table(void)
{
	int	i;
	int	j;
	char	ch;

	i = 0;
	j = 20;
	while (i <= 255)
	{
		printf("%d -> %c\n", i, (char) i);
		if (i == j)
		{
			do
			{
				printf("\nType 'c' or 'C' and <ENTER> to continue...");
				scanf(" %c", &ch);
			}while (!(ch == 'c' || ch == 'C'));
			j = j + 20;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_ascii_table();
}
