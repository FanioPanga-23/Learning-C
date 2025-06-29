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
	char	*ps;
	char	**pps;

	ps = s;
	pps = &ps;
	printf("%c  %c  %c\n%c  %c  %c\n%c  %c  %c\n%d  %d  %d\n", *s, \
			*ps, **pps, *(s + 1), *(ps + 2), \
			*(*pps + 3), *(s + 4), *(ps + 4), *(*pps + 4),\
			ft_strlen(s), ft_strlen(ps), ft_strlen(*pps));
}
