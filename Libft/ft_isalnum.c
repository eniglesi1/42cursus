int	ft_isalnum(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 122) || (c < 58 && c > 47))
	{
		return (1);
	}
	else
		return (0);
}
