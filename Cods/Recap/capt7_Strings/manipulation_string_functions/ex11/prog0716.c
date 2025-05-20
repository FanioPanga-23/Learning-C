/********************************************************************************
 * PROG0716.C:	Solicita e apresenta nomes ate nome == "SAIR"			*
 * AUTOR:	Fânio Panga							*
 * DATA:	16/05/2025							*
 * ******************************************************************************/

#include <stdio.h>
#define	WORD "SAIR"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
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
		i++;
	}
}

int	main(void)
{
	char	nome[51];

	do
	{
		printf("Nome: ");
		fgets(nome, sizeof(nome), stdin);
		ft_rmBreak(nome);
		puts(nome);
	} while (ft_strcmp(nome, WORD));
	puts("Terminou o programa..");
}
