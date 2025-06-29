#include <stdio.h>

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
			j++;
			k++;
		}
		if (s2[k] == '\0')
		{
			s1 += i;
			return (s1);
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	s1[] = "Fanio Panga";
	char	s2[] = " PanSga";

	puts(ft_strstr(s1, s2));
}