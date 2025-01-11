#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrcpy(char *dest, char *orig)
{
	int	len;

	for (len = ft_strlen(orig); len >= 0; len--)
		dest[len] = orig[len];
	return (dest);
}

char	*ft_strcat(char *dest, char *orig)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(dest);
	while (orig[i] != '\0')
		dest[len++] = orig[i++];
	dest[len] = '\0';
	return (dest);
}

char	*ft_memcpy(char *dest, char *orig, int n)
{
	int	i;

	i = 0;
	while (orig[i] != '\0' && i < n)
		dest[i] = orig[i++];
	dest[i] = '\0';
	return (dest);
}

char	*ft_strins(char *dest, char *orig)
{
	ft_strrcpy(dest+ft_strlen(orig), dest);
	ft_memcpy(dest, orig, ft_strlen(orig));
	return (dest);
}

int	main(void)
{
	char	dest[] = "Autonoma";
	char	orig[] = "Universidade";

	printf("%s\n", ft_strins(dest, orig));
}
