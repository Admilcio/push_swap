
int	ft_isalpha(int c)
{
	if ((c < 'a' && c > 'Z') || (c < 'A') || (c > 'z'))
		return (0);
	return (1);
}
