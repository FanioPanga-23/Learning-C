#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	ft_putstr(char *s)
{
	while (*s)
	{
		ft_putchar(*s);
		s++;
	}
	return ;
}

char	*ft_remch(char *s)
{
	int	len;

	len = ft_strlen(s);
	if (s[len - 1] == '\n' && s[len] == '\0')
		s[len - 1] = '\0';
	return (s);
}

int	ft_strcountc(char *s, char ch)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == ch)
			i++;
		s++;
	}
	return (i);
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
		s[i++] = s[len];
		s[len--] = tmp;
	}
	return (s);
}

void	ft_lastName(char *nome, char *sobrenome)
{
	int	len;
	int	i;

	if (ft_strcountc(nome, ' ') == 0)
		sobrenome[0] = '\0';
	else
	{
		i = 0;
		len = ft_strlen(nome) - 1;
		while (nome[len] != ' ')
		{
			sobrenome[i] = nome[len];
			i++;
			len--;
		}
		sobrenome[i] = '\0';
	}
}

int	main(void)
{
	char	nome[50];
	char	sobrenome[50];
	char	ask[] = "Type your full name: ";
	char	na[] = "Mears";

	ft_putstr(ask);
	fgets(nome, sizeof(nome), stdin);
	ft_remch(nome);
	ft_lastName(nome, sobrenome);
	ft_putstr(ft_strrev(sobrenome));
	write(1, "\n", 1);
}
