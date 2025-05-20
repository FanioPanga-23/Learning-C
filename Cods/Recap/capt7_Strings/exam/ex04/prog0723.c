/********************************************************************************
 * PROG0723.C:	Torna a string 's' vazia					*
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

char	*ft_init_str(char *s)
{
	s[0] = '\0';
	return (s);
}
