#include <stdio.h>

char	ft_Max_Ascii(char *str)
{
	int	i;
	int	j;
	char	stor = str[0];

	i = 0;
	if (str[i] == 0)
		return ('\0');
	while(str[i] != '\0')
	{
		if (str[i] >= stor)
			stor = str[i];
		i++;
	}
	return (stor);
}
