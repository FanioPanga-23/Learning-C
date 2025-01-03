#include <stdio.h>

void	reverse_type_date()
{
	int     dia;
        int     mes;
        int     ano;

        printf("\t\t\t====== Insira uma data no formato aaaa-mm-dd ======\n");
        printf("Ano:  ");
        scanf("%d", &ano);
        printf("Mes: ");
        scanf(" %d", &mes);
        printf("Dia: ");
        scanf(" %d", &dia);
        if ((dia > 31) || (mes > 12) || (ano < 1))
        {
                printf("Data invalida!!\n");
                return ;
        }
        else
                printf("dd/mm/aa: %d/%d/%d\n", dia, mes, ano);
}

int	main()
{
	reverse_type_date();
}
