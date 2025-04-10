/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariam_user <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:18:44 by mariam_us         #+#    #+#             */
/*   Updated: 2025/04/10 00:27:59 by mariam_us        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	find_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign_count;
	int	count;
	int	result;
	int	index;

	i = 0;
	sign_count = 1;
	count = 0;
	result = 0;
	if (error(base) == 0)
		return (0);
	while (base[count])
		count++;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign_count *= -1;
		i++;
	}
	while (str[i] != '\0')
	{
		index = find_index(str[i], base);	
		if (index == -1)
			break;
		result = result * count + index;
		i++;
	}
	return (result * sign_count);
}
