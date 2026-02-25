/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnasr <tnasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 12:12:57 by tnasr             #+#    #+#             */
/*   Updated: 2025/08/03 12:12:57 by tnasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	helper(char *dict_file, char *num)
{
	t_dict	dict[512];
	char	buffer[4096];
	int		size;

	if (!is_valid_number(num))
	{
		ft_putstr("Error\n");
		return (0);
	}
	size = read_dict(dict_file, dict, buffer, sizeof(buffer));
	if (size < 0)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	if (ft_strlen(num) >= size)
	{
		ft_putstr("Error\n");
		return (1);
	}
	convert_number(dict, size, num, 1);
	ft_putchar('\n');
	return (1);
}

int	main(int argc, char **argv)
{
	char	*dict_file;
	char	*num;

	if (argc == 2)
	{
		dict_file = "numbers.dict";
		num = argv[1];
	}
	else if (argc == 3)
	{
		dict_file = argv[1];
		num = argv[2];
	}
	if (argc < 2 || argc > 3)
		return (0);
	if (!helper(dict_file, num))
		return (0);
	return (0);
}
