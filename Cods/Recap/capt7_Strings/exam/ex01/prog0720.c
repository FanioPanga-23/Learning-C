/********************************************************************************
 * PROG0720.C:	Coloca em todas as posicoes da 'string', o caractere 'ch'	*
 * AUTOR:	Fânio Panga							*
 * DATA:	19/05/2025							*
 * ******************************************************************************/

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')\
		ft_putchar(s[i++]);
	return ;
}

char	*ft_strset(char *s, char ch)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		s[i++] = ch;
	return (s);
}

/*int	main(void)
{
	char	nome[] = "Alf";

	ft_strset(nome, 'A');
	ft_putstr(nome);
	ft_putchar('\n');
}*/
