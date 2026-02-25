/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnasr <tnasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 12:12:49 by tnasr             #+#    #+#             */
/*   Updated: 2025/08/03 12:12:49 by tnasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_strtrim(char *str)
{
	int		start;
	int		end;
	int		len;
	char	*res;
	int		i;

	start = 0;
	while (str[start] == ' ' || str[start] == '\t' || str[start] == '\n')
		start++;
	end = ft_strlen(str) - 1;
	while (end >= start
		&& (str[end] == ' ' || str[end] == '\t' || str[end] == '\n'))
		end--;
	len = end - start + 1;
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (start <= end)
		res[i++] = str[start++];
	res[i] = '\0';
	return (res);
}
