#include <stdio.h>
#define DIM 20

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_putNull(char *s)
{
	int	i;

	i = ft_strlen(s);
	s[i - 1] = '\0';
}

int	main(void)
{
	char	nome[DIM];
	char	test[] = "SAIR";

	while(1)
	{
		printf("Introduza o Nome: ");
		fgets(nome, DIM, stdin);
		ft_putNull(nome);
		if (ft_strcmp(nome, test) == 0)
			break;
		printf("Nome: %s\n", nome);
	}
	puts("Terminou o Programa!");
}
