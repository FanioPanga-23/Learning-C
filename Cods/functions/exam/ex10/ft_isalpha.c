#include <stdio.h>

int	ft_isalpha(char ch)
{
	return ((ch >= 'a' && ch <= 'z') || (ch >= 'A'  && ch <= 'Z'));
}
