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
}
