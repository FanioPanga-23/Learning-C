void	ft_calc(float v, int num, float *xmin, float *xmax)
{
	int	i;

	i = 0;
	xmax = xmin = *v;
	while (i < num)
	{
		if (v[i] > xmax)
			xmax = v[i];
		if (v[i] < xmin)
			xmin = v[i];
		i++;
	}
}
