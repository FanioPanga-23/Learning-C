#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

int	main(void)
{
	char	s[] = "Exame";
	char	*ps;
	char	**pps;

	ps = s;
	pps = &ps;
	ft_putchar(*s);
	write(1, " ", 1);
	ft_putchar(*ps);
	write(1, " ", 1);
	ft_putchar(**pps);
	write(1, "\n", 1);
	ft_putchar(*(s+1));
	write(1, " ", 1);
	ft_putchar(*(ps+2));
	write(1, " ", 1);
	ft_putchar(*(*pps+3));
	write(1, "\n", 1);
	ft_putchar(*(s+4));
	write(1, " ", 1);
	ft_putchar(*(ps+4));
	write(1, " ", 1);
	ft_putchar(*(*pps+4));
	write(1, "\n", 1);
	printf("%d %d %d\n", ft_strlen(s), ft_strlen(ps), ft_strlen(*pps));
}
