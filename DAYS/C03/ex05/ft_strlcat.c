/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariam_user <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 18:19:38 by mariam_us         #+#    #+#             */
/*   Updated: 2025/05/08 09:34:19 by mariam_us        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	space_left;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < size)
	{
		i++;
	}
	space_left = size - i;
	while (src[j] != '\0' && space_left > 1)
	{
		dest[i + j] = src[j];
		j++;
		space_left--;
	}
	if (i < size)
	{
		dest[i + j] = '\0';
	}
	return (i + j);
}
