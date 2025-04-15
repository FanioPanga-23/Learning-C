#include <stdio.h>

int main()
{
	int	dia;
	int	mes;
	int	ano;

	printf("\t\t\t====== Insira uma data ======\n");
	printf("Dia:  ");
	scanf("%d", &dia);
	printf("Mes: ");
	scanf(" %d", &mes);
	printf("Ano: ");
	scanf(" %d", &ano);

	if ((dia > 31) || (mes > 12) || (ano < 1))
	{
		printf("Data invalida!!\n");
		return (0);
	}
	else
		printf("dd/mm/aa: %d/%d/%d\n", dia, mes, ano);
	return (0);
}
