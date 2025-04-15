#include <stdio.h>

int	main(void)
{
	char	sv;

	printf("Informe o seu estado civil: ");
	sv = getchar();
	if (sv == 's' || sv == 'S')
		printf("Estado Civil: 'Solteiro/a'\n");
	else
		if (sv == 'c' || sv == 'C')
			printf("Estado Civil: 'Casado/a'\n");
		else
			if (sv == 'd' || sv == 'D')
				printf("Estado Civil: Divorciado/a\n");
			else
				if (sv == 'v' || sv == 'V')
					printf("Estado Civil: 'Viuvo/a'\n");
				else
					printf("Estado Civil invalido..!!\n");

}
