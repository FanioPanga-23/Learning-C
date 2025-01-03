#include <stdio.h>

int	ft_isdigit(char ch)
{
	return (ch >= 48 && ch <= 57);
}

int	main(void)
{
	char	ch;

	printf("Type a charactere: ");
	ch = getchar();
	if (ft_isdigit(ch) != 0)
		printf("'%c' It's a digit\n", ch);
	else
		printf("'%c' Isn't a digit\n", ch);
	return (0);
}
