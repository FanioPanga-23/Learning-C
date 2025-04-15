/************************************************************
 * PROG0312.C:	Estado civil com Switch			    *
 * AUTOR:	Fãnio Panga				    *
 * DATA:	09/04/2025				    *
 * **********************************************************/

#include <stdio.h>

int	main(void)
{
	char	estado_civil;

	printf("Qual e o eu estado civil: ");
	estado_civil = getchar();
	switch (estado_civil)
	{
		case 's':
		case 'S':
			printf("Solteiro/a\n");
			break;
		case 'c':
		case 'C':
			printf("Casado/a\n");
			break;
		case 'd':
		case 'D':
			printf("Divorciado/a\n");
			break;
		case 'v':
		case 'V':
			printf("Viuvo/a\n");
			break;
		default:
			printf("Estado civil invalido!!\n");
	}
}
