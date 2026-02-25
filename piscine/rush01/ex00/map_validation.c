/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_validation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tal-achk <tal-achk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 23:09:49 by tal-achk          #+#    #+#             */
/*   Updated: 2025/07/27 20:14:44 by tal-achk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	seen_r_left(int r, int **map);
int	seen_r_right(int r, int **map);
int	seen_c_top(int c, int **map);
int	seen_c_bottom(int c, int **map);

int	check_row(int r, int **map, int clues[16])
{
	int	j;
	int	contain_buildings;

	j = 0;
	contain_buildings = 1;
	while (j < 4)
	{
		if (map[r][j] == 0)
			contain_buildings = 0;
		j++;
	}
	if (contain_buildings)
	{
		if ((seen_r_left(r, map) != clues[8 + r])
			|| (seen_r_right(r, map) != clues[12 + r]))
			return (0);
	}
	return (1);
}

int	check_col(int c, int **map, int clues[16])
{
	int	i;
	int	contain_buildings;

	i = 0;
	contain_buildings = 1;
	while (i < 4)
	{
		if (map[i][c] == 0)
			contain_buildings = 0;
		i++;
	}
	if (contain_buildings)
	{
		if ((seen_c_top(c, map) != clues[c])
			|| (seen_c_bottom(c, map) != clues[4 + c]))
			return (0);
	}
	return (1);
}

int	map_valid(int r, int c, int **map, int clues[16])
{
	if ((!check_row(r, map, clues))
		|| (!check_col(c, map, clues)))
		return (0);
	return (1);
}
