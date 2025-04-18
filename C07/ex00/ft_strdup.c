/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariam_user <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:05:46 by mariam_us         #+#    #+#             */
/*   Updated: 2025/04/18 13:21:09 by mariam_us        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	int		count;
	char	*copy;
	int		i;

	count = 0;
	while (src[count])
		count++;
	copy = (char *)malloc(sizeof(char) * (count + 1));
	if (copy == 0)
		return (NULL);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
