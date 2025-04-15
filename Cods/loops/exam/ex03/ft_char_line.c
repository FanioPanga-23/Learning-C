#include <stdio.h>

void	ft_char_line(int nb, char ch)
{
	int	i;
	int	j;

	i = 1;
	while (i <= nb)
	{
		j = 1;
		while (j <= nb)
		{
			printf("%c", ch);
			j++;
		}
		putchar('\n');
		i++;
	}
}

int	main(void)
{
	int	nb;
	char	ch;

	printf("Type a charactere: ");
	ch = getchar();
	printf("Type a number: ");
	scanf(" %d", &nb);
	ft_char_line(nb, ch);
}
