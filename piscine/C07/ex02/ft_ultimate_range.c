/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabboud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 06:23:58 by cabboud           #+#    #+#             */
/*   Updated: 2025/08/07 06:46:19 by cabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
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
	if (arr != NULL)
	{
		while (min < max)
		{
			arr[i] = min;
			min++;
			i++;
		}
		*range = arr;
		return (i);
	}
	else
		return (-1);
}
