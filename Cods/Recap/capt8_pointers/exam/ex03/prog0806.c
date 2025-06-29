#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *str, char ch)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			return (str + i);
		i++;
	}
	return (NULL);
}

void	ft_strrmbr(char *str)
{
	int	len;

	len = ft_strlen(str) - 1;
	if (str[len] == '\n')
		str[len] = '\0';
	return ;
}

int	main(void)
{
	char	*name;
	char	ch;

	name = (char *)malloc(sizeof(name) * 50);
	if (name == NULL)
		return (0);
	printf("Type a name: ");
	fgets(name, 50, stdin);
	printf("Type a char: ");
	ch = getchar();
	ft_strrmbr(name);
	printf("Retorno: %s\n", ft_strchr(name, ch));
}
