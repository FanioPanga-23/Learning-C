#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *s1, char *s2)
{
	int	i;
	int	j;
	int	k;
	int	len;

	i = 0;
	len = ft_strlen(s1) - ft_strlen(s2);
	while (i < len)
	{
		j = i;
		k = 0;
		while (s1[j] == s2[k] && s2[k] != '\0')
		{
			j++;
			k++;
		}
		if (s2[k] == '\0')
			return (s1 + i);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	name[] = "O rato roeu a rolha da garrafa de rum do rei da Russia";
	char	sub[] = "rum";

	puts(ft_strstr(name, sub));
}
