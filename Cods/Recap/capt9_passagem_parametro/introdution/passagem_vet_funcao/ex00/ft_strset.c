char	*ft_strset(char *s, char ch)
{
	while (*s)
	{
		*s = ch;
		s++;
	}
	return (s);
}
