#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;
	
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *orig)
{
	int	i;
	
	i = 0;
	while (dest[i] = orig[i])
		i++;
	dest[i] = '\0';
	return (dest);
}

char	*ft_strstr(char *s1, char *s2)
{
	int	i;
	int	j;
	int	k;
	int	len;

	i = 0;
	k = 0;
	j = 0;
	len = ft_strlen(s1) - ft_strlen(s2);
	while (s1[i] <= len)
	{
		while (s1[j] == s2[j++])
			;
		if (s2[j] == '\0')
			return (s1+i);
		i++;
	}
	return (NULL);
}

char	*ft_strDellStr(char *s1, char *s2)
{
	char	*ptr_s1;
	char	*first;

	ptr_s1 = s1;
	first = ptr_s1;
	while (*s1)
	{
		if (*s1 != *s2)
			*ptr_s1++ = *s1;
		else
			s2++;
		s1++;
	}
	*ptr_s1 = '\0';
	return (first);
}

int	main(void)
{
	/*  roeu a rolha da garrafa de rum do rei da Rússia */
	char	s[] = "O rato";
	char	s1[] = "rato";

	printf("%s\n", ft_strstr(s, s1));
}
