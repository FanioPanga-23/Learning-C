#include <stdio.h>
#include <stdlib.h>

int	ft_isupper(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

char	*ft_strDellUpper(char *s)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = s;
	while (*s)
	{
		if (ft_isupper(*s))
			*s++;
		*tmp++ = *s++;
		i++;
	}
	*tmp = '\0';
	tmp -= i;
	return (tmp);
}

int	main(void)
{
	char	s[] = "Agora Vou Remover Todos Os Char Upper";

	ft_strDellUpper(s);
	puts(s);
}
