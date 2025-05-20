/********************************************************************************
 * PROG0721.C:	Coloca todos os  caracteres da string 's' em maiusculas		*
 * AUTOR:	Fânio Panga							*
 * DATA:	19/05/2025							*
 * ******************************************************************************/

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char ch)
{
	write (1, &ch, 1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}

int	ft_islower(char ch)
{
	return (ch >= 97 && ch <= 122);
}

char	*ft_strupr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (ft_islower(s[i]))
			s[i] -= 32;
		i++;
	}
	return (s);
}

/*int	main(void)
{
	char	str[] = "Teste Upper Nº1";

	ft_strupr(str);
	ft_putstr(str);
	ft_putchar('\n');
}*/
