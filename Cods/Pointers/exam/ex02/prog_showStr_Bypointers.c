#include <stdio.h>

int	main(void)
{
	char	vs[4][25] = {"Fanio", "Joao", "Panga", "Programador"};
	char	(*ptr_vs)[25] = vs;
	char	*ptr_ptr_vs;

	while (ptr_vs - vs < 4)
	{
		ptr_ptr_vs = *ptr_vs;
		while (*ptr_ptr_vs != '\0')
			printf("%c", *ptr_ptr_vs++);
		putchar(' ');
		ptr_vs++;
	}
	putchar('\n');
}
