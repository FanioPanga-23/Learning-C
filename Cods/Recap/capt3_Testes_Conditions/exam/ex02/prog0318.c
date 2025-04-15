/**************************************************************
 * PROG0318.C:	Conversor de H para M/S/D, com if-else	      *
 * AUTOR:	Fânio Panga				      *
 * DATA:	15/04/2025				      *
 * ************************************************************/

#include <stdio.h>

int	ft_checkForm(char ch)
{
	char	forms[6] = "mMsSdD";
	int	i;

	i = 0;
	while (forms[i] != '\0')
	{
		if (ch == forms[i])
			return(1);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	form;
	int	n_horas;
	long	res;

	printf("======== CONVERSOR DE HORA PARA M/S/D  ========\n");
	while (1)
	{
		printf("Carga horaria: ");
		scanf(" %d", &n_horas);
		fflush(stdin);
		if (n_horas > 0)
			break;
		printf("ERRO: carga horaria invalida!!\n");
	}
	while (1)
	{
		printf("Deseja converter para => mm/ss/dd: ");
		scanf(" %c", &form);
		fflush(stdin);
		if (ft_checkForm(form) == 1)
			break;
		printf("ERRO: formato invalido!!\n");
	}
	if (form == 'm' || form == 'M')
		res = (n_horas * (long)60);
	else
		if (form == 's' || form == 'S')
			res = (n_horas * (long)3600);
		else
			if (form == 'd' || form == 'D')
				res = (n_horas * (long)36000);
	printf("%dh => %ld%c\n", n_horas, res, form);
}
