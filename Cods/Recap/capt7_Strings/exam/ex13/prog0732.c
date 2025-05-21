/********************************************************************************
 * PROG0732.C:	Coloca um espaco depois de cada caractere nao espaco		*
 * AUTOR:	Fânio Panga							*
 * DATA:	21/05/2025							*
 * ******************************************************************************/

#define SPACE '_'

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_xspace(char *s)
{
	int	len;

	len = ft_strlen(s);
	s[len * 2] = s[len];
	len--;
	while (len >= 0)
	{
		if (s[len] == SPACE)
			s[2*len] = ' ';
		else
			s[2*len] = s[len];
		s[2*len+1] = SPACE;
		len--;
	}
	return (s);
}
