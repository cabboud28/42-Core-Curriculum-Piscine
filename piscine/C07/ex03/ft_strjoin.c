/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabboud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 06:51:39 by cabboud           #+#    #+#             */
/*   Updated: 2025/08/07 15:19:12 by cabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_all_lenghts(int size, char **str, char *sep)
{
	int		i;
	int		sum;
	char	*al;

	sum = 0;
	i = 0;
	if (size <= 0)
		sum = 1;
	else
	{
		while (i < size)
		{
			sum += ft_strlen(str[i]);
			i++;
		}
		sum += ft_strlen(sep) * size - 1;
	}
	al = (char *) malloc(sizeof(char) * sum);
	if (al == NULL)
		return (0);
	return (al);
}

char	*ft_strjoin(int size, char **str, char *sep)
{
	int		i;
	int		j;
	int		c;
	char	*al;

	i = 0;
	c = 0;
	al = ft_all_lenghts(size, str, sep);
	while (size > i)
	{
		j = 0;
		while (str[i][j])
		{
			al[c++] = str[i][j++];
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{
			al[c++] = sep[j++];
		}
		i++;
	}
	al[c] = '\0';
	return (al);
}
