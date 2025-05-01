/*********************************************************
 * PROG0418.C:	Print inteiros ate mult 10		 *
 * AUTOR:	Fânio Panga				 *
 * DATA:	16/04/2025				 *
 * *******************************************************/

#include <stdio.h>

int	main(void)
{
	int	i;
	int	num;

	printf("Digite um inteiro: ");
	scanf("%d", &num);
	while (num)
	{
		if (num % 3 == 0)
		{
			num++;
			continue;
		}
		else
			if (num % 10 == 0)
				break;
		printf("%2d\n", num++);
	}
}
