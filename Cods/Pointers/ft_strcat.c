#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *orig)
{
	char	*first;

	first = dest;
	while (*dest++ = *orig++)
		;
	return (first);
}

char	*ft_strcat(char *dest, char *orig)
{
	ft_strcpy(dest+ft_strlen(dest), orig);
	return(dest);
}

int	main(void)
{
	char	s1[] = "Fanio Joao";
	char	s2[] = " Panga";

	printf("%s\n", ft_strcat(s1, s2));
}
