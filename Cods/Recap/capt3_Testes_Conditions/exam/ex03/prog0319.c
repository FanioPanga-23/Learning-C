/**************************************************************
 * PROG0317.C:	Conv. de H para M/S/D, com switch sem break   *
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

	res = 1;
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
	switch(form)
	{
		case 'd':
		case 'D':
			res *= 10;
		case 's':
		case 'S':
			res *= 60;
		case 'm':
		case 'M':
			res *= 60;
	}
	printf("%dh => %ld%c\n", n_horas, (n_horas * (long)res), form);
}
