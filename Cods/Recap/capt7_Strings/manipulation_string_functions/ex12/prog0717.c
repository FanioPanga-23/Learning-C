/********************************************************************************
 * PROG0717.C:	Adiciona espaco em branco apos um caractere			*
 * AUTOR:	Fânio Panga							*
 * DATA:	17/05/2025							*
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

char	*ft_strpad(char *s)
{
	int	i;
	int	j;

	i = ft_strlen(s);
	s[2 * i] = '\0';
	i--;
	while (i >= 0)
	{
		s[2 * i] = s[i];
		s[2 * i + 1] = ' ';
		i--;
	}
	return (s);
}

int	main(void)
{
	char	nome[] = "ola";

	printf("Retorno: -> '%s'\n'%c'\n", ft_strpad(nome));
}
