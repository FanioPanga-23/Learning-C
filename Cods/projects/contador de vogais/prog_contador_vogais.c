#include <stdio.h>
#include <unistd.h>
#define SAIR 2

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_boas_vindas(void)
{
	printf("\n\t\t======== Bem-Vindo ao Contador de Vogais ========\n");
	return ;
}

int	ft_continuar(void)
{
	int	nb;

	while (1)
	{
		printf("\nDeseja continuar?\n");
		printf("1.Continuar\n2.Sair\n");
		printf("Escolha: ");
		scanf("%d", &nb);
		if (nb == 1 || nb == 2)
			return (nb);
	}
}

int	ft_isVogal(char ch)
{
	char vogais[] = "aeiouAEIOU";
	int	i;

	i = 0;
	while (vogais[i] != '\0')
	{
		if (vogais[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_vowel(char *s)
{
	int	i;
	int	stor;

	i = 0;
	stor = 0;
	while (s[i] != '\0')
	{
		if (ft_isVogal(s[i]))
			stor++;
		i++;
	}
	return (stor);
}

void	ft_clean_buffer(void)
{
	int	ch;

	while ((ch = getchar()) != '\n' && ch != EOF);
	return ;
}

int	main(void)
{
	size_t	len;
	char	str[100];
	short int	opt;
	short	n_vogal;
	int	repeat;

	repeat = 1;
	ft_boas_vindas();
	do
	{
		if (repeat == 1)
			printf("\nPrecione <ENTER> para iniciar..");
		else
			if (repeat == 2)
				printf("\nPrecione <ENTER> para tentar novamente..");
		ft_clean_buffer();
		printf("\nDigite uma frase para contar o numero de vogais: ");
		fgets(str, sizeof(str), stdin);
		len = ft_strlen(str);
		if (len > 0 && str[len - 1] == '\n')
			str[ft_strlen(str) - 1] = '\0';
		if (str[0] == '\0' || str[0] == '\n')
		{
			printf("\nERRO: string vazia. Tente novamente...\n");
			repeat = 2;
			continue;
		}
		n_vogal = ft_count_vowel(str);
		if (n_vogal)
			printf("Existem %d vogais na frase \"%s\"\n", n_vogal, str);
		else
			if (ft_strlen(str) > 0 && n_vogal < 1)
				printf("Nao existem vogais na frase \'%s\'\n", str);
		opt = ft_continuar();
		repeat = 0;
	} while (opt != SAIR);
	printf("\nEncerrando programa...\n");
}
