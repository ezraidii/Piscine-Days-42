/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariam_user <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:29:43 by mariam_us         #+#    #+#             */
/*   Updated: 2025/03/19 21:30:46 by mariam_us        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(char c)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hex_digits[(unsigned char) c / 16], 1);
	write(1, &hex_digits[(unsigned char) c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			print_hex((unsigned char)str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
