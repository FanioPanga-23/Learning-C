/********************************************************
 * PROG0206.C:	Leitura de inteiros e suas variações    *
 * AUTOR:	Fânio Panga				*
 * DATA:	02/04/2025				*
 * ******************************************************/

#include <stdio.h>

int	main(void)
{
	short	idade;
	int	montante;
	long	num_conta;

	printf("Informe a sua idade: ");
	scanf(" %hd", &idade);
	printf("Informe a quantia a ser depositada: ");
	scanf(" %d", &montante);
	printf("Informe o numero da conta para o depósito: ");
	scanf(" %ld", &num_conta);
	printf("Uma pessoa de %hd anos depositou %d.00AOA na conta: %ld\n", idade, montante, num_conta);
}
