/****************************************************************************************
 * PROG0705.C:	Retorna o tamanho de uma string						*
 * AUTOR:	Fânio Panga								*
 * DATA:	15/05/2025								*
 * **************************************************************************************/

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
