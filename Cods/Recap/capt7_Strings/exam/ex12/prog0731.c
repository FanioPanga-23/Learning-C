/********************************************************************************
 * PROG0731.C:	Altera 's' deixando os caracteres existentes de 'n' em 'n' pos.	*
 * AUTOR:	Fânio Panga							*
 * DATA:	21/05/2025							*
 * ******************************************************************************/

#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_Entremeado(char *s, int n)
{
	int	i;
	int	j;
	int	len;

	if (n == 0)
		return (s);
	i = 0;
	j = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		s[j] = s[i];
		i += n+1;
		j++;
	}
	s[j] = '\0';
	return (s);
}
