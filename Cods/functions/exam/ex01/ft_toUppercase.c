#include <stdio.h>

char	ft_toUppercase(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (ch -= 32);
	else
		return (ch);
}

int	main(void)
{
	char	ch;

	printf("Type a charactere: ");
	ch = getchar();
	printf("%c\n", ft_toUppercase(ch));
	return (0);
}
