#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dst, char *orig)
{
	size_t	i;

	i = 0;
	while (orig[i] != '\0')
	{
		dst[i] = orig[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strcat(char *dst, char *orig)
{
	size_t	len;
	int	i;

	i = 0;
	len = ft_strlen(dst);
	while (orig[i] != '\0')
	{
		dst[len] = orig[i];
		len++;
		i++;
	}
	dst[len] = '\0';
	return (dst);
}

char	*ft_strins(char *dst, const char *orig)
{
	char	*tmp;
	size_t	len;

	len = ft_strlen(dst) + ft_strlen(orig);
	tmp = (char *)malloc(sizeof(char *) * len + 1);
	if (!tmp)
		return (NULL);
	ft_strcpy(tmp, (char *)orig);
	ft_strcat(tmp, dst);
	ft_strcpy(dst, tmp);
	free(tmp);
	return (dst);
}
