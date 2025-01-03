#include <stdio.h>

int	main(void)
{
	int	joao = 7894561;
	int	*SAMAD = NULL;

	SAMAD = &joao;

	printf("%d\n", *SAMAD);
}
