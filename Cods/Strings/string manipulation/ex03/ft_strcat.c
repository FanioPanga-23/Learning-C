#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char    *ft_strcat(char *dest, char *orig)
{
        int     i;
        int     len;

        len = ft_strlen(dest);
        i = 0;
        while (dest[len] = orig[i++])
                len++;
        dest[len] = '\0';
        return (dest);
}
