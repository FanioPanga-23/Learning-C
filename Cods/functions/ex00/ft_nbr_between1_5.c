#include <stdio.h>
#include <unistd.h>
#define CH "*"
#define N 21

void	ft_putcharactere(int nb)
{
	int	i;

	i = 1;
	while (i <= nb)
	{
		write(1, CH, 1);
		i++;
	}
	write(1, "\n", 2);
}

int	ft_strln(char *str)
{
	int	n;
	
	n = 0;
	while (*str)
	{
		*str++;
		n++;
	}	
	return (n);
}

void	ft_putchar(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		*str++;
	}
	write(1, "\n", 2);
}

void	ft_print_out(void)
{
	int	i;
	char	word [] = "Numbers between 1 & 5";

	i = 1;
	ft_putcharactere(ft_strln(word));
	ft_putchar(word);
	ft_putcharactere(ft_strln(word));
	while (i <= 5)
	{
		printf("%d\n", i);
		i++;
	}
	ft_putcharactere(ft_strln(word));
}

int	main(void)
{
	ft_print_out();
}
