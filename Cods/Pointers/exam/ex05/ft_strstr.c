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

	i = 0;
	k = 0;
	j = 0;
	while (s1[i] < ft_strlen(s1) - ft_strlen(s2))
	{
		while (s1[k++] == s2[j] && s2[j++] != '\0')
			;
		if (s2[j] == '\0')
			return (s1+i);
	}
	return (NULL);
}
