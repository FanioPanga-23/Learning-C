#include <stdio.h>

int	main()
{
	int	segundos;

	printf("Digite um numero de segundos: ");
	scanf("%d", &segundos);
	printf("Horas: %d\n",(segundos / 3600));
	printf("Minutos: %d\n", (int) (segundos % 3600) / 60);
	printf("Segundos: %d\n", (int) (segundos % 60));
	return (0);
}
