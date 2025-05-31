/********************************************************************************
 * PROG0742.C:	Recebe uma string e deixa-lhe apenas os caracteres maiusculos	*
 * AUTOR:	Fânio Panga							*
 * DATA:	22/05/2025							*
 * ******************************************************************************/

#include <stdio.h>

int	ft_isUpper(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

char	*ft_All_Big(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (ft_isUpper(s[i]))
			s[j++] = s[i];
		i++;
	}
	s[j] = '\0';
	return (s);
}

/*int	main(void)
{
	char	ts[] = "SomOs ToDos Nos";

	printf("-> '%s'\n", ft_All_Big(ts));
}*/
