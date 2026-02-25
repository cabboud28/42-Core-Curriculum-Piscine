/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_number.c                                    :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: tnasr <tnasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 12:13:01 by tnasr             #+#    #+#             */
/*   Updated: 2025/08/03 12:13:01 by tnasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	convert_group(t_dict *dict, int size, char *grp, int *first)
{
	if (handle_hundreds(dict, size, grp, first))
		return ;
	handle_tens_units(dict, size, grp, first);
}

int	modify_num(int len, int count, char *num, char (*group)[4])
{
	while (len > 0)
	{
		if (len >= 3)
			group[count][0] = num[len - 3];
		else
			group[count][0] = '0';
		if (len >= 2)
			group[count][1] = num[len - 2];
		else
			group[count][1] = '0';
		group[count][2] = num[len - 1];
		group[count][3] = '\0';
		len -= 3;
		count++;
	}
	return (count);
}

void	tmp(int len, char *num, int size, t_dict *dict)
{
	int	i;

	i = 0;
	while (len == i + 1 || num[i] == '0')
		i++;
	if (i <= len)
		return ;
	ft_putstr(find_word(dict, size, "0"));
}

void	convert_number(t_dict *dict, int size, char *num, int first)
{
	int		len;
	int		count;
	char	group[20][4];

	len = ft_strlen(num);
	first = 1;
	count = 0;
	count = modify_num(len, count, num, group);
	tmp(len, num, size, dict);
	while (--count >= 0)
	{
		if (group[count][0] != '0' || group[count][1] != '0'
				|| group[count][2] != '0')
		{
			convert_group(dict, size, group[count], &first);
			if (count > 0)
				print_with_space(get_scale_word(dict, size, count),
					&first);
		}
	}
}
