#include <stdio.h>

int	ft_isalnum(char ch)
{	       
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (1);
	if (!(ch >= '0' && ch <= '9'))
		return (0);
	else
		return (1);
}
