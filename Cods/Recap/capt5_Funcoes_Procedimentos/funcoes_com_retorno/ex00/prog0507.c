/*******************************************************
 * PROG0507.C:	Soma e dobro			       *
 * AUTOR:	Fânio Panga			       *
 * DATA:	02/05/2025			       *
 * *****************************************************/

#include <stdio.h>

int	ft_soma(int num1, int num2)
{
	return (num1 + num2);
}

int	ft_dobro(int num)
{
	return (num * 2);
}

int	main(void)
{
	int	n1;
	int	n2;

	printf("Digite dois numeros: ");
	scanf("%d %d", &n1, &n2);
	printf("Soma -> %2d\n", ft_soma(n1, n2));
	printf("Dobro de %2d -> %2d\n", n1, ft_dobro(n1));
	printf("Dobro de %2d -> %2d\n", n1, ft_dobro(n2));
}
