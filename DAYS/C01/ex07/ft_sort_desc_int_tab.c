int ft_min(int *tab, int size)
{
	int	i;
	int	min;

	i = 0;
	while (i < size)
	{
		min = tab[0];
		if (tab[i] < min)
		{
			min = tab[i];
		}
		i++;
	}
	return min;
}
