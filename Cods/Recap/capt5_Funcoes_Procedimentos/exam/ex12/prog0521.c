/********************************************************
 * PROG0521.C:	E alfanumerico?				*
 * AUTOR:	Fânio Panga				*
 * DATA:	04/05/2025				*
 * ******************************************************/

int	ft_isdigit(char ch)
{
	return (ch >= '0' && ch <= '9');
}

int	ft_isalpha(char ch)
{
	return (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z');
}

int	ft_isalnum(char ch)
{
	return (ft_isdigit(ch) || ft_isalpha(ch));
}
