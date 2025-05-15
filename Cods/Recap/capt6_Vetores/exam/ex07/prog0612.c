/********************************************************************************
 * PROG0612.C:	Checka se as n first pos dos vet 's1' e 's2' sao iguais		*
 * AUTOR:	Fânio Panga							*
 * DATA:	15/05/2025							*
 * ******************************************************************************/

#include <stdio.h>

char	ft_toLower(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		ch += 32;
	return (ch);
}

int	ft_memicmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if ( ft_toLower(s1[i]) == ft_toLower(s2[i]) )
			i++;
		else
			return ( ft_toLower(s1[i]) - ft_toLower(s2[i]) );
	}
	return (1);
}
