#include <stdio.h>

int	ft_ult_ind_chr(char *s, char c)
{
	int	i;
	int	ind;

	i = 0;
	ind = 0;
	while (s[i++] != '\0')
	{
		if (s[i] == c)
			ind = i;
	}
	return (ind != 0? ind: -1);
}
