/********************************************************************************
 * PROG0733.C:	Devolve o caractere com o maior codigo ASCII presente em 's'	*
 * AUTOR:	Fânio Panga							*
 * DATA:	21/05/2025							*
 * ******************************************************************************/

char	ft_Max_Ascii(char *s)
{
	int	i;
	char	max;

	if (s[0] == '\0')
		return ('\0');
	i = 1;
	max = s[0];
	while(s[i] != '\0')
	{
		if ((int)max < (int)s[i])
			max = s[i];
		i++;
	}
	return (max);
}
