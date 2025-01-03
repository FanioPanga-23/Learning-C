#include <stdio.h>

int	main(void)
{
	char	strs[3][17] = {"Fanio", "Joao", "Panga"};
	char	(*ptr_s)[17] = strs;
	char	*ptr_ch;

	while (ptr_s - strs < 3)
	{
		ptr_ch = *ptr_s;
		while (*ptr_ch != '\0')
			putchar(*ptr_ch++);
		putchar(' ');
		ptr_s++;
	}
	putchar('\n');
}
