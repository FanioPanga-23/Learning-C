/********************************************************************************
 * PROG0724.C:	Devolve o ultimo indice do caractere 'c' em 's'			*
 * AUTOR:	Fânio Panga							*
 * DATA:	20/05/2025							*
 * ******************************************************************************/

#include <stdio.h>
#include <unistd.h>

int	ft_ult_ind_chr(char *s, char ch)
{
	int	i;
	int	index;

	i = 0;
	index = -1;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			index = i;
		i++;
	}
	return (index);
}
