/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tal-achk <tal-achk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:15:15 by tal-achk          #+#    #+#             */
/*   Updated: 2025/07/27 21:12:30 by tal-achk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		check_input(char *str, int clues[16]);
int		fill(int r, int c, int **map, int clues[16]);
void	print_error(char *message);

void	form_map(int **map)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			write(1, &map[i][j], 1);
			if (j < 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	**set_zeros(int r, int c)
{
	int	**map;
	int	i;
	int	j;

	map = (int **)malloc(r * sizeof(int *));
	i = 0;
	while (i < r)
	{
		map[i] = (int *)malloc(c * sizeof(int));
		j = 0;
		while (j < c)
		{
			map[i][j] = 0;
			j++;
		}
		i++;
	}
	return (map);
}

int	main(int argc, char **argv)
{
	int	**map;
	int	clues[16];
	int	i;

	if (argc != 2)
		return (print_error("Error: no argument entered!\n"), 1);
	if (!check_input(argv[1], clues))
		return (print_error("Error: invalid input!\n"), 1);
	map = set_zeros(4, 4);
	if (!map)
		return (print_error("Error: cannot be allocated!\n"), 1);
	if (!fill(0, 0, map, clues))
		return (print_error("Error: cannot be solved!\n"), 1);
	else
		form_map(map);
	i = 0;
	while (i < 4)
		free(map[i++]);
	free(map);
	return (0);
}
