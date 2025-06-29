#include <stdio.h>

char	*ft_strrchr(char *str, char ch)
{
	char	*pt_stor;

	pt_stor = NULL;
	while (*str)
	{
		if (*str == ch)
			pt_stor = str;
		str++;
	}
	return (pt_stor);
}
