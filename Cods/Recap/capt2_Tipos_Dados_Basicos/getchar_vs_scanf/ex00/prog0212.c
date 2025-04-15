#include <stdio.h>

int	main(void)
{
	char	ch1;
	char	ch2;

	printf("Digite um Caractere: ");
	scanf("%c", &ch1);
	printf("Digite outro caractere: ");
	scanf("%c", &ch2);
	printf("Os carcateres digitados foram: '%c' e '%c'\n", ch1, ch2);
	/*Haverá uma saída indesejada por não ter feito a limpeza do buffer*/
}
