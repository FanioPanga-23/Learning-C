#include <stdio.h>
#include <unistd.h>

void    ft_putstrc(char *vet)
{
	int	i;
	while (vet[i] != '\0')
	{
		printf("%c", vet[i]);
		i++;
	}
	putchar('\n');
}

int main()
{
	char stra[6] = "Mears";

	ft_putstrc(stra);
}
