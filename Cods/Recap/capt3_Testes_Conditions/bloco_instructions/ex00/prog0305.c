/************************************************************
 * PROG0305.C:	Ordem crescente				    *
 * AUTOR:	Fânio Panga				    *
 * DATA:	07/04/2025				    *
 * **********************************************************/

#include <stdio.h>

int	main(void)
{
int	a;
int	b;
int	tmp;

printf("Insira dois números: ");
scanf("%d %d", &a, &b);
if (a > b){
tmp = a;
a = b;
b = tmp;
}
printf("%d, %d\n", a, b);
}
