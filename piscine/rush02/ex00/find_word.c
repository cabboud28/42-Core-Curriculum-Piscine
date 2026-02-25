/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnasr <tnasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 12:12:54 by tnasr             #+#    #+#             */
/*   Updated: 2025/08/03 12:12:54 by tnasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*find_word(t_dict *dict, int size, char *num)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (ft_strcmp(dict[i].num, num) == 0)
			return (dict[i].word);
		i++;
	}
	return (NULL);
}

char	*get_scale_word(t_dict *dict, int size, int group_index)
{
	char	scale_num[50];
	int		i;

	if (group_index == 0)
		return ("");
	scale_num[0] = '1';
	i = 1;
	while (i <= group_index * 3)
	{
		scale_num[i] = '0';
		i++;
	}
	scale_num[i] = '\0';
	return (find_word(dict, size, scale_num));
}

void	print_with_space(char *word, int *first)
{
	if (!*first)
		ft_putchar(' ');
	ft_putstr(word);
	*first = 0;
}
