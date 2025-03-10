/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariam_user <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 22:22:49 by mariam_us         #+#    #+#             */
/*   Updated: 2025/03/10 02:19:22 by mariam_us        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
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

void	ft_print_combn(int n)
{
	int	tab[10];
	int	i;
	int	j;

	if (n <= 0 || n >= 10)
		return ;
	i = -1;
	while (++i < n)
		tab[i] = i;
	while (tab[0] <= (10 - n))
	{
		ft_print_current(tab, n);
		i = n - 1;
		while (i >= 0 && tab[i] == (10 - (n - i)))
			i--;
		if (i < 0)
			break ;
		tab[i]++;
		j = i + 1;
		while (j < n)
		{
			tab[j] = tab[j - 1] + 1;
			j++;
		}
	}
}
