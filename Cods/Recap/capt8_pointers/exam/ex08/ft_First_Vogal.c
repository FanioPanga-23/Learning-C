int	ft_isvogal(char ch)
{
	char	vogals[] = "aeiouAEIOU";
	int	i;

	i = 0;
	while (vogals[i] != '\0')
	{
		if (vogals[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_First_Vogal(char *s)
{
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		if (ft_isvogal(s[i]))
			return (s + i);
		i++;
	}
	return (NULL);
}
