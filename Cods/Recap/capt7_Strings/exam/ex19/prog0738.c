/********************************************************************************
 * PROG0738.C:	Recebe e duplica o conteudo de uma string			*
 * AUTOR:	Fânio Panga							*
 * DATA:	21/05/2025							*
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

char	*ft_strduplica(char *s)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s);
	s[2*len] = s[len];
	while (i <= len)
	{
		s[2*len] = s[len];
		len--;
	
	return (s);
}

int	main(void)
{
	char	ts[] = "Ana";

	printf(" -> '%s'\n", ft_strduplica(ts));
}
