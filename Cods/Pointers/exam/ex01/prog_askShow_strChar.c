#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_rm(char *s)
{
	int	len;

	len = ft_strlen(s);
	s[len-1] = '\0';
}

char	*ft_strchr(char *s, char ch)
{
	while (*s)
	{
		if (*s == ch)
			return (s);
		s++;
	}
	return (NULL);
}

int	main(void)
{
	char	s[50];
	char	c;

	printf("Type a Word: ");
	fgets(s, sizeof(s), stdin);
	ft_rm(s);
	printf("Type a Charactere: ");
	scanf("%c", &c);
	puts(ft_strchr(s, c));
}
