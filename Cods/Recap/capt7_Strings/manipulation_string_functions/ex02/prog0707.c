/****************************************************************************************
 * PROG0707.C:	Copia a string 'orig' para 'dest' e retorna a string 'dest'		*
 * AUTOR:	Fânio Panga								*
 * DATA:	15/05/2025								*
 * **************************************************************************************/

#include <stdio.h>

char	*ft_strcpy(char *dest, char *orig)
{
	int	i;

	i = 0;
	if (orig[0] == '\0')
		return (dest);
	while (orig[i] != '\0')
	{
		dest[i] = orig[i];
		i++;
	}
	/*Aqui a sacada e simples, usamos como teste da condicao 
	 *o valor devolvido apos a a tribuicao. Neste caso o resultado da 
	 *condicao sera falso '0', apos o caractere NULLO '\0' ser atribuido 
	 *a 'dest' e devolvido
	 *while (dest[i] = orig[i])
	 	i++;
	 * */
	dest[i] = '\0';
	return (dest);
}
