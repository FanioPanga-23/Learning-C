/************************************************************
 * PROG0315.C:	Operations aritmeticas			    *
 * AUTOR:	Fânio Panga				    *
 * DATA:	09/04/2025				    *
 * **********************************************************/

#include <stdio.h>

int	main(void)
{
	char	operador;
	int	n1;
	int	n2;
	int	resultado;

	printf("Escreva uma expressao aritmetica: ");
	scanf("%d %c %d", &n1, &operador, &n2);
	switch (operador)
	{
		case '+':
			resultado = n1 + n2;
			break;
		case '-':
			resultado = n1 - n2;
			break;
		case 'x':
		case 'X':
		case '*':
			resultado = n1 * n2;
			break;
		case '/':
		case '\\':
			resultado = n1 / n2;
			break;
	}
	printf("%d %c %d = %d\n", n1, operador, n2, resultado);
}
