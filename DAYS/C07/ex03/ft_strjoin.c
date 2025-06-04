/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariam_user <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 09:10:21 by zoentifi          #+#    #+#             */
/*   Updated: 2025/06/03 23:08:26 by mariam_us        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
		}
		i++;
		len = len + j;
	}
	i = 0;
	while (sep[i])
	{
		i++;
	}
	len = len + (size - 1) * i;
	return (len);
}

void	ft_cat(char *arr, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			arr[k++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				arr[k++] = sep[j++];
		}
		i++;
	}
	arr[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		len;

	if (size == 0)
	{
		arr = (char *)malloc(sizeof(char) * 1);
		arr[0] = '\0';
		return (arr);
	}
	len = ft_strlen(size, strs, sep);
	arr = (char *)malloc(sizeof(char) * len + 1);
	if (!arr)
		return (NULL);
	ft_cat(arr, size, strs, sep);
	return (arr);
}
