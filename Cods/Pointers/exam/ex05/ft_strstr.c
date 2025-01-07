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
	char	*ptr;

	i = 0;
	while (s1[i] != '\0')
	{
		j = i;
		k = 0;
		while (s2[k++] == s1[j])
			j++;
		if (s2[k] == '\0')
			return (ptr = &s1[i]);
		else
			i++;
	}
	return (NULL);
}

int	main(void)
{
	char	s1[] = "Fanio Mears";
	char	s2[] = "ars ";

	ft_putstr(ft_strstr(s1, s2));
	write(1, "\n", 1);
}
