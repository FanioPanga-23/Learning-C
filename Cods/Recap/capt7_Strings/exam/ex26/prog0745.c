/********************************************************************************
 * PROG0745.C:	Torna a primeira metade em min e toda seg metade em maiu	*
 * AUTOR:	Fânio Panga							*
 * DATA:	22/05/2025							*
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

int	ft_isLower(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

int	ft_isUpper(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

char	*ft_Transform(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s) - 1;
	while (j >= i)
	{
		if (ft_isUpper(s[i]))
			s[i] += 32;
		if (ft_isLower(s[j]))
			s[j] -= 32;
		i++;
		j--;
	}
	return (s);
}
