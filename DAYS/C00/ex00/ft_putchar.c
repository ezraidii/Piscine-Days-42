#include <unistd.h>

void	ft_putchar(void)
{
	write(1, &c, 1);
}

void	ft_print_current(int *tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	if (tab[0] != 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_current(tab, n)
{
	int	tab[10];
	int	i;
	int	j;

	if (n >= 0 && n <= 10)
