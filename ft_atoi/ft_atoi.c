int	ft_atoi(char *str)
{
	int i;
	int minus;
	int nbr;

	i = 0;
	minus = 0;
	nbr = 0;

	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while(str[i] == '-')
		minus++;
	while(str[i] == '-' || str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	if(minus > 0)
		nbr = -nbr;
	return (nbr);
}
