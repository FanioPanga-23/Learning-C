#include <stdio.h>

int	main(void)
{
	/*
	 * Variacoes do tipo Int:
	 * short, int, long
	 * signed, unsigned
	 * signed int, unsigned int,
	 * signed short int, unsigned short int
	 * signed long int, unsigned long int
	 */

	short int	shortInt;
	int	intType;
	long int	longInt;

	signed short int	sShort;
	unsigned short int	unShort;

	signed int	sInt;
	unsigned int	unInt;

	signed long int		sLong;
	unsigned long int	unLong;

	shortInt = 12;
	intType = 22;
	longInt = 20241999;

	sShort = -12;
	unShort = 13;

	sInt = -22;
	unInt = 23;

	sLong = -20241999;
	unLong = 19992024;

	printf("Short Int: %hd\nInt: %d\nLong Int: %ld\nSigned Short: %hd\nUnsigned Short: %hu\nSigned Int: %d\nUnsigned Int: %u\nSigned Long: %ld\nUnsigned Long: %lu\n", shortInt, intType, longInt, sShort, unShort, sInt, unInt, sLong, unLong);
}
