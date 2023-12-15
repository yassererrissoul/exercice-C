int	ft_atoi(char *str)
{
	int	i = 0;
	int	rest = 0;
	int	number = 1;

    while ((str[i] <= 15 && str[i] >= 9) || str[i] == 32)
		i++;

	if ((str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			number *= -1;
		i++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		rest = rest * 10 + str[i] - '0';
		i++;
	}
	return rest * number;
}
