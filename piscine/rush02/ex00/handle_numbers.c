/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnasr <tnasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 16:02:41 by tnasr             #+#    #+#             */
/*   Updated: 2025/08/03 18:43:15 by tnasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	handle_hundreds(t_dict *dict, int size, char *grp, int *first)
{
	char	tmp[3];

	if (grp[0] != '0')
	{
		tmp[0] = grp[0];
		tmp[1] = '\0';
		print_with_space(find_word(dict, size, tmp), first);
		print_with_space(find_word(dict, size, "100"), first);
	}
	tmp[0] = grp[1];
	tmp[1] = grp[2];
	tmp[2] = '\0';
	if (find_word(dict, size, tmp))
	{
		print_with_space(find_word(dict, size, tmp), first);
		return (1);
	}
	if (grp[1] == '1')
	{
		tmp[0] = grp[1];
		tmp[1] = grp[2];
		tmp[2] = '\0';
		print_with_space(find_word(dict, size, tmp), first);
	}
	return (0);
}

void	handle_tens_units(t_dict *dict, int size, char *grp, int *first)
{
	char	tmp[3];
	int		i;

	i = 1;
	while (i < 3)
	{
		if (grp[i] != '0' && grp[1] != '1')
		{
			tmp[0] = grp[i];
			if (i == 1)
				tmp[1] = '0';
			else
				tmp[1] = '\0';
			tmp[2] = '\0';
			print_with_space(find_word(dict, size, tmp), first);
		}
		i++;
	}
}
