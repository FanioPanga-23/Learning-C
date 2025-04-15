#include <stdio.h>
#define DIM 20

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *orig)
{
	int	i;
	int	len;

	len = ft_strlen(dest);
	i = 0;
	while (dest[len] = orig[i++])
		len++;
	dest[len] = '\0';
	return (dest);
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

int	main(void)
{
	char	nome[DIM];
	char	sobrenome[DIM];
	char	completo[DIM * 2 + 10];
	int	i;
	char	dest[] = "Fan";
	char	orig[] = "io Panga";

	while (1)
	{
		printf("Introduza o Nome: "); gets(nome);
		if (ft_strlen(nome) == 0)
			return (0);
		printf("Introduza o Sobrenome: "); gets(sobrenome);
		ft_strcpy(completo, sobrenome);
		ft_strcat(completo, ", ");
		ft_strcat(completo, nome);
		printf("%s\n", completo);
		putchar('\n');
	}
}
