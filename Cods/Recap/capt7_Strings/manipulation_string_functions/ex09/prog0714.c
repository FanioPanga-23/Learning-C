/********************************************************************************
 * PROG0714.C:	Inverta a string e devolve					*
 * AUTOR:	Fânio Panga							*
 * DATA:	16/05/2025							*
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

char	*ft_strrev(char *s)
{
	int	i;
	int	len;
	char	tmp;

	i = 0;
	len = ft_strlen(s) - 1;
	while (i < len)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len++] = tmp;
	}
	return (s);
}

int	main(void)
{
	printf("Reverse: %s\n", ft_strrev("Panga"));
}
