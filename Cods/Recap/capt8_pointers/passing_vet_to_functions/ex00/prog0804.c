#include <stdio.h>

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

int	main(void)
{
	char	nome[100];

	printf("Type a name: ");
	fgets(nome, sizeof (nome), stdin);
	ft_strrmBr(nome);
	printf("Name length: %d\n", ft_strlen(nome));
}
