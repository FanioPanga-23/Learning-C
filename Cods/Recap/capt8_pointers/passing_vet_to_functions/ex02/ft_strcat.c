int	ft_strlen(char *s)
{
	char *tmp;

	tmp = s;
	while (*s != '\0')
		s++;
	return ((int)(s - tmp));
}

char	*ft_strcpy(char *dest, char *orig)
{
	char	*tmp;

	tmp = dest;
	while (*dest++ = *orig++)
		;
	return (tmp);
}

char	*ft_strcat(char *dest, char *orig)
{
	char	*tmp;

	tmp = dest;
	ft_strcpy(dest + ft_strlen(dest), orig);
	return (tmp);
}
