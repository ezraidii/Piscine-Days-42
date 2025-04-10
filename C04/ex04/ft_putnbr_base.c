/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariam_user <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 00:16:29 by mariam_us         #+#    #+#             */
/*   Updated: 2025/04/04 12:25:15 by mariam_us        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	error(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
	{
		return (0);
	}
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		count;
	long	num;

	count = 0;
	if (error(base) == 0)
		return ;
	while (base[count])
		count++;
	num = nbr;
	if (nbr < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num >= count)
	{
		ft_putnbr_base(num / count, base);
	}
	write(1, &base[num % count], 1);
}
