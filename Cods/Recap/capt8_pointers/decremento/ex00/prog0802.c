#include <stdio.h>

int	ft_strlen(char *s)
{
	char	*tmp;

	tmp = s;
	while (*s != '\0')
		s++;
	return ((int)(s - tmp));
}

char	*ft_rmBr(char *s)
{
	int	len;

	len = ft_strlen(s) - 1;
	if (s[len] == '\n' || s[len] == 10)
		s[len] = '\0';
	return (s);
}

int	main(void)
{
	char	str[100];
	char	*ptr_str;

	ptr_str = str;
	printf("Type a word: ");
	fgets(str, sizeof (str), stdin);
	ft_rmBr(str);
	while (*ptr_str != '\0')
		printf("%c", *ptr_str++);
	putchar('\n');
	ptr_str--;
	while (ptr_str >= str)
		printf("%c", *ptr_str--);
	putchar('\n');
}
