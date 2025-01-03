#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_print_order(char *str)
{
	while (*str)
		printf("%c", *str++);
	putchar('\n');
}

void	ft_print_unorder(char *str)
{
	int	len;

	len = ft_strlen(str);
	while (len >= 0)
		printf("%c", *(str+(len--)));
	putchar('\n');
}

int	main(void)
{
	char	string[] = "Fanio";

	ft_print_order(string);
	ft_print_unorder(string);
}
