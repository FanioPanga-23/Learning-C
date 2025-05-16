/********************************************************************************
 * PROG0709.C:	Ler nome e sobrenome e apresentar 'sobrenome, nome'		*
 * AUTOR:	Fânio Panga							*
 * DATA:	16/05/2025							*
 * ******************************************************************************/

#include <stdio.h>
#define	SEPARAR ", "
const	int	DIM = 21;

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_isnull(char *s)
{
	if (ft_strlen(s) == 0 || s[0] == 10)
		return (1);
	return (0);
}

char	*ft_rmBreak(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == 10)
		{
			s[i] = '\0';
			return (s);
		}
		else
			i++;
	}
	return (s);
}

char	*ft_strcpy(char *dest, char *orig)
{
	int	i;

	i = 0;
	while (dest[i] = orig[i])
		i++;
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *orig)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(dest);
	while (dest[len + i] = orig[i])
		i++;
	dest[len + i] = '\0';
	return (dest);
}

int	main(void)
{
	char	nome[DIM];
	char	sobrenome[DIM];
	char	fullName[DIM * 2 - 1];

	while (1)
	{
		printf("Nome: ");
		fgets(nome, sizeof(nome), stdin);
		if (ft_isnull(nome))
			break ;
		ft_rmBreak(nome);
		printf("Sobrenome: ");
		fgets(sobrenome, sizeof(sobrenome), stdin);
		ft_rmBreak(sobrenome);
		ft_strcpy(fullName, nome);
		ft_strcat(fullName, SEPARAR);
		ft_strcat(fullName, sobrenome);
		printf("Nome Completo: %s\n", fullName);
	}
}
