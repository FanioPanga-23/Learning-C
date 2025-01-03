#include <stdio.h>
#include <stdlib.h>
#define OPT_EXIT "SAIR"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_isLower(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

int	ft_isUpper(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_toLower(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i] + 32;
		i++;
	}
	return (s);
}

char	*ft_toUpper(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (ft_isLower(s[i]))
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}

char	*ft_rmbreak(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '\n')
		{
			s[i] = '\0';
			return (s);
		}
		i++;
	}
}

char	*ft_capitalizer(char *s)
{
	int	i;

	if (ft_isLower(s[0]))
		s[0] = s[0] - 32;
	i = 1;
	while (s[i] != '\0')
	{
		if (s[i - 1] == ' ' && ft_isLower(s[i]))
			s[i] = s[i] - 32;
		else
			if (!(s[i - 1] == ' ') && ft_isUpper(s[i]))
				s[i] = s[i] + 32;
		i++;
	}
	return (s);
}

int	ft_strcountc(char *str, char ch)
{
	int	i;
	int	o;

	o = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			o++;
		i++;
	}
	return (o);
}

char	*ft_strrev(char *s)
{
	int	i;
	int	len;
	char	tmp;

	i = 0;
	len = ft_strlen(s) - 1;
	while (len > i)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
		len--;
		i++;
	}
	return (s);
}

void	ft_str_Separat(char *nome, char *sobrenome)
{
	int	len;
	int	i;

	if (ft_strcountc(nome, ' ') == 0)
	{
		sobrenome[0] = '\0';
		return ;
	}
	i = 0;
	len = ft_strlen(nome) - 1;
	while (nome[len] != ' ')
	{
		sobrenome[i] = nome[len--];
		i++;
	}
	sobrenome[i] = '\0';
	nome[len] = '\0';
}

int	main(void)
{
	char	nome[100];
	char	sobrenome[30];

	while (1)
	{
		printf("Digite o seu nome: ");
		fgets(nome, 100, stdin);
		ft_rmbreak(nome);
		if (ft_strcmp(ft_toUpper(nome), OPT_EXIT) == 0)
			return (0);
		ft_capitalizer(nome);
		ft_str_Separat(nome, sobrenome);
		ft_strrev(sobrenome);
		system("clear");
		printf("%s, %s\n\n", sobrenome, nome);
	}
}
