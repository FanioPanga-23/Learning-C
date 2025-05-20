/********************************************************************************
 * PROG0719.C:	Le uma string do teclado e coloca no parametro da funcao	*
 * AUTOR:	Fânio Panga							*
 * DATA:	19/05/2025							*
 * ******************************************************************************/

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char	ch)
{
	write(1, &ch, 1);
	return ;
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		ft_putchar(s[i++]);
	return ;
}

char	*ft_mygets(char *s)
{
	int	i;
	char	ch;

	i = 0;
	while ( (ch = getchar()) != '\n')
		s[i++] = ch;
	s[i] = '\0';
	return (s);
}

/*int	main(void)
{
	char	str[50];

	ft_putstr("Digite uma palavra qualquer: ");
	ft_mygets(str);
	ft_putstr(str);
	ft_putchar('\n');
}*/
