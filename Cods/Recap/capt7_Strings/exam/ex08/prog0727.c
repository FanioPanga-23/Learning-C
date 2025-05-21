/********************************************************************************
 * PROG0727.C:	Compara as strings 's1' e 's2' ignorando case			*
 * AUTOR:	Fânio Panga							*
 * DATA:	20/05/2025							*
 * ******************************************************************************/

#include <stdio.h>

int	ft_ignorCase(char ch1, char ch2)
{
	return (ch1 - ch2 == 32 || ch1 - ch2 == -32);
}

int	ft_stricmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (ft_ignorCase(s1[i], s2[i]) || s1[i] == s2[i])
			i++;
		else
			break;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
