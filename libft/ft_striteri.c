
void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s == 0)
		return ;
	while (s[i] != '\0')
	{
		f(i, (s + i));
		i++;
	}
}
