#include <stdio.h>

int	ft_isLower(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

char	ft_isUpper(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_lower_upper(char *s)
{
	int	i;
	int	j;
	int	len;
	int	possible;
	char	tmp;
	
	len = ft_strlen(s);
	possible = 1;
	while (possible)
	{
		possible = 0;
		i = 0;
		while(i < len)
		{
			if (ft_isUpper(s[i]) != 0 && ft_isLower(s[i+1]))
			{
				tmp = s[i];
				s[i] = s[i+1];
				s[i+1] = tmp;
				possible = 1;
			}
			i++;
		}
	}
	return (s);
}

int	main(void)
{
	char	test[] = "EraUmaVezUMCavalo";

	printf("%s\n", ft_lower_upper(test));
}
