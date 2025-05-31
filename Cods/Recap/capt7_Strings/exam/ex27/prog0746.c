/********************************************************************************
 * PROG0746.C:	Ler nomes e escreve-los no formato: Sobrenome, Nome sem sobrenom*
 * AUTOR:	Fânio Panga							*
 * DATA:	23/05/2025							*
 * ******************************************************************************/

#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_ignorCase(char ch1, char ch2)
{
	return (ch1 - ch2 == 32 || ch1 - ch2 == -32);
}

int	ft_isLower(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

int	ft_isUpper(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

char	ft_toLower(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (ch + 32);
	return (ch);
}

char	*ft_rmBreak(char *s)
{
	int	len;

	len = ft_strlen(s) - 1;
	if (s[len] == '\n')
		s[len] = '\0';
	return (s);
}

char	*ft_wordupr(char *s)
{
	int	i;

	if (ft_isLower(s[0]))
		s[0] -= 32;
	i = 1;
	while (s[i] != '\0')
	{
		if (s[i - 1] == ' ' && ft_isLower(s[i]))
			s[i] -= 32;
		if (s[i - 1] != ' ' && ft_isUpper(s[i]))
			s[i] += 32;
		i++;
	}
	return (s);
}

int	ft_haveSpace(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strcpy(char *dest, char *orig)
{
	int	i;

	i = 0;
	while (orig[i] != '\0')
	{
		dest[i] = orig[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *orig)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dest);
	while (orig[i] != '\0')
		dest[len++] = orig[i++];
	dest[len] = '\0';
	return (dest);
}

char	*ft_strrev(char *s)
{
	char	aux;
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s) - 1;
	while (i <= len)
	{
		aux = s[i];
		s[i++] = s[len];
		s[len--] = aux;
	}
}

int	ft_stricmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (ft_ignorCase(s1[i], s2[i]) || s1[i] == s2[i])
			i++;
		else
			break;
	}
	return ( (unsigned char) s1[i] - (unsigned char) s2[i] );
}

void	ft_transform(char *nome, char *sobrenome)
{
	int	i;
	int	len;

	if (!ft_haveSpace(nome))
	{
		ft_strcpy(sobrenome, nome);
	}
	else
	{
		i = 0;
		len = ft_strlen(nome) - 1;
		while (nome[len] != ' ')
			sobrenome[i++] = nome[len--];
		nome[len] = '\0';
		sobrenome[i] = '\0';
		ft_strrev(sobrenome);
		ft_strcat(sobrenome, ", ");
		ft_strcat(sobrenome, nome);
	}
}

int	main(void)
{
	char	nome[100];
	char	sobrenome[100];

	while (1)
	{
		printf("Nome: ");
		fgets(nome, sizeof(nome), stdin);
		ft_rmBreak(nome);
		if ( !(ft_stricmp(nome, "SAIR")))
			break;
		ft_wordupr(nome);
		ft_transform(nome, sobrenome);
		puts(sobrenome);
	}
	puts("Terminando o programa..");
}
