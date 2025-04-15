#include <stdio.h>

int	main(void)
{
	char	string[] = "Fanio Mears";
	char	*ptr_s = string;

	while (*ptr_s != '\0')
		putchar(*ptr_s++);
	putchar('\n');
	while (ptr_s-- >= string)
		putchar(*ptr_s);
	putchar('\n');
}
