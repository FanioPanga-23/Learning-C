#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	char	s[] = "Exame";
	char	*ps = s;
	char	**pps = &ps;

	printf("%c %c %c\n", *s, *ps, **pps);
	printf("%c %c %c\n", *(s+1), *(ps+2), *(*pps+3));
	printf("%c %c %c\n", *(s+4), *(ps+4), *(*pps+4));
	printf("%d %d %d\n", ft_strlen(s), ft_strlen(ps), ft_strlen(*pps));
	printf("%ld %ld %ld\n", (long)&s[1], (long)++ps, (long)&pps);
}
