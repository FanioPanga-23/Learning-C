#include <stdio.h>

int	ft_strlen(char *s);
char	*ft_strrmBr(char *s);

int	main(void)
{
	char	str[50];

	printf("Type a word: ");
	fgets(str, sizeof(str), stdin);
	ft_strrmBr(str);
	printf("String Length: %d\n", ft_strlen(str));
}

int	ft_strlen(char *s)
{
	char	*tmp;

	tmp = s;
	while (*s != '\0')
		s++;
	return ((int)(s - tmp));
}

char	*ft_strrmBr(char *s)
{
	int	len;

	len = ft_strlen(s) - 1;
	if (s[len] == '\n' || s[len] == 10)
		s[len] = '\0';
	return (s);
}
