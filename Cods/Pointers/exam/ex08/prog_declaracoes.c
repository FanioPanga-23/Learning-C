#include <stdio.h>

int	main(void)
{
	int	v[] = {10, 20, 30, 40, 50};
	int	*pv;
	int	**ppv;

	pv = v;
	ppv = &pv;

	printf("%d %d %d\n", *v, *pv, **ppv);
	printf("%d %d %d\n", *(v+1), *(pv+1), *(*ppv+1));
	printf("%d %d %d\n", *(v+2), *(pv+3), *(*ppv+4));
	printf("%d %d %d\n", *v-1, *pv+9, **ppv+19);
}
