/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabboud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 04:58:12 by cabboud           #+#    #+#             */
/*   Updated: 2025/08/07 06:16:32 by cabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	arr = (int *)malloc(sizeof(int) * (max - min) + 1);
	if (min >= max)
	{
		arr = NULL;
		return (0);
	}
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
