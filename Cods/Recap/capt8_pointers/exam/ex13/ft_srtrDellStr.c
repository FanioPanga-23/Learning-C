#include <stdio.h>

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strstr(char *s1, char *s2)
{
	int	i;
	int	j;
	int	k;
	int	len;

	i = 0;
	len = ft_strlen(s1) - ft_strlen(s2);
	while (i <= len)
	{
		j = i;
		k = 0;
		while (s1[j] == s2[k] && s2[k] != '\0')
		{
			j++;
			k++;
		}
		if (s2[k] == '\0')
			return (s1 + i);
		i++;
	}
	return (NULL);
}

char	*ft_strdellstr(char *s1, char *s2)
{
	char	*tmp;
	char	*address;
	int	i;

	if (!s1)
		return (NULL);
	else if (!s2)
		return (s1);
	tmp = s1;
	address = ft_strstr(s1, s2);
	i = 0;
	while (*s1)
	{
		if (s1 == address)
			s1 += ft_strlen(s2);
		*tmp++ = *s1++;
		i++;
	}
	*tmp = '\0';
	tmp -= i;
	return (tmp);
}