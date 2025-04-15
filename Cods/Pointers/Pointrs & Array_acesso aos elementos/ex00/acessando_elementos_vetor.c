#include <stdio.h>

int	main(void)
{
	char	s[] = "OlaOleOli";
	char	*ptr_s = s;
	int	vetor[] = {10, 20, 30};
	int	*ptr_vet = vetor;

	/*Acessando o caractere 'a'*/
	/*putchar(*(ptr_s+2));*/
	/*putchar(*(s+2));*/
	/*putchar(s[2])
	putchar(ptr_s[2]);
	putchar('\n');*/
	printf("%d\n", vetor[2] == *(vetor+2));
}
