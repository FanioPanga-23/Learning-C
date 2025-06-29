char	*ft_strrchr(char *s, char ch)
{
	char	*tmp;
	int	i;

	tmp = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			tmp = s + i;
		i++;
	}
	return (tmp);
}
