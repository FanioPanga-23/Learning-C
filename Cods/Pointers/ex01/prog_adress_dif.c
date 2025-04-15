#include <stdio.h>

int	ft_strlen(char *s)
{
	char	*ptr_s = &s[6];

	while (*s != '\0')
		s++;
	return (int) (s - ptr_s);
}

int	main(void)
{
	char	s[100];
	char	*ptr = s;

	printf("Type a String: ");
	fgets(s, sizeof(s), stdin);

	printf("%d\n", ft_strlen(s));
}
