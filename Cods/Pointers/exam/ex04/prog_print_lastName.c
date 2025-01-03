#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *s)
{
	int	len;
	int	i;
	char	tmp;

	i = 0;
	len = ft_strlen(s) - 1;
	while (i < len)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
		len--;
		i++;
	}
	return (s);
}

void	ft_cpy_Lname(char *nome, char *sobrenome)
{
	int	len;
	int	i;
	int	y;

	y = 0;
	while (nome[y] != ' ')
	{
		if (nome[y] == '\0')
		{
			sobrenome[0] = '\0';
			return ;
		}
		y++;
	}
	if (nome[0] == '\0')
		return;
	i = 0;
	len = ft_strlen(nome) - 1;
	while (nome[len] != ' ')
		sobrenome[i++] = nome[len--];
	sobrenome[i] = '\0';
	nome[len] = '\0';
}

char	*ft_str_rmBreak(char *s)
{
	while (1)
	{
		if (*s == '\n')
		{
			*s = '\0';
			return (s);
		}
		s++;
	}
	return (NULL);
}

int	main(void)
{
	char	nome[80];
	char	sobrenome[50] = "Mears";

	printf("Type Your Full Name: ");
	fgets(nome, sizeof(nome), stdin);
	ft_str_rmBreak(nome);
	ft_cpy_Lname(nome, sobrenome);
	printf("%s %s\n", ft_strrev(sobrenome), nome);
}
