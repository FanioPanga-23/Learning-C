/********************************************************************************
 * PROG0725.C:	Coloca todos os caracteres de 's' em minusculas			*
 * AUTOR:	Fânio Panga							*
 * DATA:	20/05/2025							*
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
		ft_putchar(s[i++]);
}

int	ft_isupper(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

char	*ft_strlwr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isupper(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}
