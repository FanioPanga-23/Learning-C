#include <stdio.h>

int	main(void)
{
	int	vt_comissao[12];
	int	i;
	vt_comissao[0] = 12000;
	vt_comissao[1] = 5000;
	vt_comissao[2] = 2300;
	vt_comissao[3] = 1230;
	vt_comissao[4] = 7400;
	vt_comissao[5] = 8350;
	vt_comissao[6] = 325;
	vt_comissao[7] = 589;
	vt_comissao[8] = 856;
	vt_comissao[9] = 20890;
	vt_comissao[10] = 32720;
	vt_comissao[11] = 45000;

	i = 0;
	while (i <= 11)
	{
		printf("Position %d has: %d\n", (i+1), vt_comissao[i]);
		i++;
	}
}
