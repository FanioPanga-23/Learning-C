#include <stdio.h>

int	ft_strlen(char *s)
{
	char	*ptr_s;

	ptr_s = s;
	while (*s != '\0')
		s++;
	return (int) (s - ptr_s);
}

int	main(void)
{
	char	s[] = "OlaOleOli";
	char	*ptr_s;

	ptr_s = s;
	printf("%c\n", ptr_s[2]);
}
