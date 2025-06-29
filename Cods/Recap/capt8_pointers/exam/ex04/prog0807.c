#include <stdio.h>

int	main(void)
{
	char	vt[3][14] = {"42", "Luanda", "Coding"};
	char	(*ptr)[14] = vt;
	char	*pt;

	while ((ptr - vt) < 3)
	{
		pt = *ptr;
		while (*pt)
			putchar(*pt++);
		putchar('\n');
		ptr++;
	}
}
