#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

int	main(void)
{
	char	strs[3][14] = {"Fanio", "Joao", "Panga"};
	int	i;
	int	j;

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (strs[i][j] != '\0')
			ft_putchar(strs[i][j++]);
		write(1, " ", 1);
		i++;
	}
	write(1,"\n", 2);
}
