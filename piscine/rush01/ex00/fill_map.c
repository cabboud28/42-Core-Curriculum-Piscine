/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tal-achk <tal-achk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:59:25 by tal-achk          #+#    #+#             */
/*   Updated: 2025/07/27 20:04:27 by tal-achk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_duplicates(int r, int c, int height, int **map);
int	clues_equality(int **map, int clues[16]);
int	map_valid(int r, int c, int **map, int clues[16]);

int	fill(int r, int c, int **map, int clues[16])
{
	int	height;

	if (r == 4)
		return (clues_equality(map, clues));
	if (c == 4)
		return (fill (r + 1, 0, map, clues));
	height = 1;
	while (height <= 4)
	{
		if (check_duplicates(r, c, height, map))
		{
			map[r][c] = height;
			if (map_valid(r, c, map, clues)
				&& fill (r, c + 1, map, clues))
				return (1);
			map [r][c] = 0;
		}
		height++;
	}
	return (0);
}
