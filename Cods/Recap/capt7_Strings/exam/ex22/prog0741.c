/********************************************************************************
 * PROG0741.C:	Organiza uma string colocando min a esq e mai a dir		*
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

char	*ft_strcat(char *dest, char *orig)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dest);
	while (orig[i] != '\0')
		dest[len++] = orig[i++];
	dest[len] = '\0';
	return (dest);
}

char	*ft_lower_upper(char *s)
{
	int	i;
	int	j;
	int	k;
	char	aux[ft_strlen(s)];

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[j++] = s[i];
		if (s[i] >= 'A' && s[i] <= 'Z')
			aux[k++] = s[i];
		i++;
	}
	aux[k] = '\0';
	s[j] = '\0';
	ft_strcat(s, aux);
	return (s);
}

/*int	main(void)
{
	char	ts[] = "EraUmaVezUMCavalo";

	printf("-> '%s'\n", ft_lower_upper(ts));
}*/
