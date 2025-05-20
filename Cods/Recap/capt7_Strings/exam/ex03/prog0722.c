/********************************************************************************
 * PROG0722.C:	Devolve o numero de caracteres alfabeticos em 's'		*
 * AUTOR:	Fânio Panga							*
 * DATA:	20/05/2025							*
 * ******************************************************************************/

#include <stdio.h>
#include <unistd.h>

int	ft_isalpha(char ch)
{
	return (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z');
}

int	ft_strcounta(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (ft_isalpha(s[i]))
			count++;
		i++;
	}
	return (count);
}
