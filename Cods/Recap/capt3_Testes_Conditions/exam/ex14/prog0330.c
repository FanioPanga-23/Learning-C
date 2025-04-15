/******************************************************************
 * PROG0330.C:	Verificador de data				  *
 * AUTOR:	Fânio Panga					  *
 * DATA:	15/04/2025					  *
 * ****************************************************************/

#include <stdio.h>

int	ft_dateChecker(int d, int m, int a)
{
	if ( (d >= 1 && d <= 31) && (m >= 1 && m <= 12) && (a >= 1 && a <= 2025) )
		return (1);
	return (0);
}

int	main(void)
{
	int	dia;
	int	mes;
	int	ano;

	printf("======== VERIFICADOR DE DATAS  ========\n\n");
	while (1)
	{
		printf("Escreva uma data no formato (dd/mm/aaaa): ");
		scanf(" %d %d %d", &dia, &mes, &ano);
		if (ft_dateChecker(dia, mes, ano))
			break;
		printf("ERRO: data invalida!!\n");
	}
	printf("DATA: %d/%d/%d\n", dia, mes, ano);
}
