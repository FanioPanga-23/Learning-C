#include <stdio.h>

int	main(void)
{
	int	v[5] = {10, 20 , 30, 40, 50};
	int	*pt_v;
	int	**pt_pt_v;

	pt_v = v;
	pt_pt_v = &pt_v;
	printf("-> %2d %2d %2d\n", *v, *pt_v, **pt_pt_v);
	printf("-> %2d %2d %2d\n", *(v+1), *(pt_v + 1), *(*pt_pt_v + 1));
	printf("-> %2d %2d %2d\n", *(v + 2), *(pt_v + 3), *(*pt_pt_v + 4));
	printf("-> %2d %2d %2d\n", *v-1, *pt_v+9, **pt_pt_v+19);
}
