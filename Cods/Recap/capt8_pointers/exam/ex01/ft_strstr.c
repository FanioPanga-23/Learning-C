#include <stdio.h>

int	ft_strlen(char *str)
{
	char *pt_tmp;

	pt_tmp = str;
	while (*str != '\0')
		str++;
	return ((int)(str - pt_tmp));
}

char	*ft_strstr(char *str1, char *str2)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= (ft_strlen(str1) - ft_strlen(str2)))
	{
		j = i;
		k = 0;
		while (str1[j] == str2[k] && str2[k] != '\0')
		{
			j++;
			k++;
		}
		if (str2[k] == '\0')
			return (str1 + i);
		i++;
	}
	return (NULL);
}
