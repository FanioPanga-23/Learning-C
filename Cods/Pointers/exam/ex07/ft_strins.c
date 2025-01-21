#include <stdio.h>

/*
 * NOTA:
 *
 * Assumimos todas as strings com um tamanho de 100 pelo facto d'eu não saber ainda usar ALOCAÇÃO DINÂMICA DE MEMÓRIA*/
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
	while (dest[i] = orig[i])
		i++;
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *orig)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dest);
	while ((dest[len] = orig[i]) != '\0')
	{
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

char	*ft_strins(char *dest, char *orig)
{
	char tmp[100];

	ft_strcpy(tmp, orig);
	ft_strcat(tmp, dest);
	ft_strcpy(dest, tmp);
	return (tmp);
}

int	main(void)
{
	char	dest[100] = "Autonoma";
	char	orig[100] = "Universidade";

	printf("%s\n%s\n", ft_strins(dest, orig), orig);
}
