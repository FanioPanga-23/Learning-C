/********************************************************************************
 * PROG0743.C:	Verifica se o tamanho da string e igual ao valor do argumento	*
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

int	ft_Is_Len_OK(char *s, int comprimento)
{
	return (ft_strlen(s) == comprimento);
}
