#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;
	
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *orig)
{
	int	i;
	
	i = 0;
	while ((dest[i] = orig[i]) != '\0')
		i++;
	dest[i] = '\0';
	return (dest);
}

char	*ft_strstr(char *s1, char *s2)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (s1[i] != '\0')
	{
		j = i;
		k = 0;
		while (s1[j] == s2[k] && s2[k] != '\0')
		{
			k++;
			j++;
		}
		if (s2[k] == '\0')
			return (s1+i);
		i++;
	}
	return (NULL);
}

char	*ft_strDelStr(char *s1, char *s2)
{
	char	*loc;

	/*Após essa operação, 'loc e s1' ficaram vinculadas por que essa função que foi chamada retorna o endereço de s1. Significa que, toda alteração na string 'loc' vai afetar também a string s1*/
	loc = ft_strstr(s1, s2);
	if (loc != NULL)
		ft_strcpy(loc, loc+ft_strlen(s2)); /*Copiamos a string 'loc' nela mesma a partir do caractere loc+ft_strlen(s2). Significa que ignoramos os caracteres da string 's2' e copiamos os restantes*/
	return (s1);
}
