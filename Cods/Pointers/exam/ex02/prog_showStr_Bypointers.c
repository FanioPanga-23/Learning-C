#include <stdio.h>
#define N_STRINGS 3

int	main(void)
{
	char	nome[N_STRINGS][12] = {"Hi", "Fanio", "Mears"};
	char	(*ptr_nome)[12] = nome;
	char	*ptr_ch;

	/* Enquanto a diferenca entre o ponteiro e o vetor for menor que o N_STRINGS (vai fazer 3 lacos)*/
	while (ptr_nome - nome < N_STRINGS)
	{
		ptr_ch = *ptr_nome;
		while (*ptr_ch != '\0')
			putchar(*ptr_ch++);
		putchar(' ');
		ptr_nome++;
	}
	putchar('\n');
}
