/********************************************************************************
 * PROG0718.C:	Apaga todas as ocorrencias do caractere 'ch' na string 's'	*
 * AUTOR:	Fânio Panga							*
 * DATA:	19/05/2025							*
 * ******************************************************************************/

#include <stdio.h>

char	*ft_strdelc(char *s, char ch)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != ch)
		{
			s[j] = s[i];
			j++;
		}
		i++;
	}
	s[j] = '\0';
	return (s);
}
