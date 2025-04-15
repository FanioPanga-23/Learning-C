#include <stdio.h>

int	main(void)
{
	int	my_number;

	my_number = 12;

	printf("%ld\n", (long int)&my_number); //Retorna o adress da var
	printf("Bytes do tipo: %ld\n", sizeof(double));
	//Retorna o tamanho em bytes do tipo double
}
