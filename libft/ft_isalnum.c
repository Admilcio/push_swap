
int	ft_isalnum(int c)
{
	if (c < 48 || c > 122 || (c < 'a' && c > 'Z') || (c < 65 && c > 57))
		return (0);
	return (1);
}
