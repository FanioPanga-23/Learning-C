#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_xspace(char *s)
{
	int	i;
	i = ft_strlen(s) - 1;
	s[2*i] = s[i];
	while (i >= 0)
	{
		if (s[i] == '_')
		{
			s[i*2] = ' ';
			s[i*2+1] = '_';
		}
		else
		{
			s[i*2] = s[i];
			s[i*2+1] = '_';
		}
		i--;
	}
	return (s);
}

int	main(void)
{
	char	test[] = "Era_Uma_Vez";

	/*printf("%d\n", ft_strlen(test));*/
	printf("%s\n", ft_xspace(test));
}
