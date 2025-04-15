#include <stdio.h>

int	ft_is_upper(char ch)
{
	return ((ch >= 65 && ch <= 90));
}

char	*ft_str_DelUpper(char *s)
{
	char	*ptr_s;
	char	*ptr_pt;

	ptr_s = s;
	ptr_pt = ptr_s;
	while (*s)
	{
		if (ft_is_upper(*s) != 1)
			*ptr_s++ = *s;
		s++;
	}
	*ptr_s = '\0';
	return (ptr_pt);
}

int	main(void)
{
	char	str[] = "mEaRs";

	printf("%s\n", ft_str_DelUpper(str));
}
