#include <stdio.h>

int	main(void)
{
	char	ch1;
	char	ch2;

	printf("Digite um Caractere: ");
	scanf("%c", &ch1);
	printf("Digite outro Caractere: ");
	scanf(" %c", &ch2);//O espaço no argumento é para limpeza do buffer
	printf("Os caracteres inseirdos foram: '%c' e '%c'\n", ch1, ch2);
}
