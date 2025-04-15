#include <stdio.h>

char	*ft_strset(char *s, char ch)
{
	int	i;

	while (s[i] != '\0')
	{
		s[i++] = ch;
	}
	return (s);
}

int	main(void)
{
	char	an[] = "Angola";
	printf("%s\n", ft_strset(an, 'F'));
}
