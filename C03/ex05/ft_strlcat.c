/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariam_user <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 23:34:22 by mariam_us         #+#    #+#             */
/*   Updated: 2025/03/21 18:13:47 by mariam_us        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	space_felt;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < size)
	{
		i++;
	}
	space_felt = size - i;
	while (src[j] != '\0' && space_felt > 1)
	{
		dest[i + j] = src[j];
		j++;
		space_felt--;
	}
	if (i < size)
	{
		dest[i + j] = '\0';
	}
	return (i + j);
}
