/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   seen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tal-achk <tal-achk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 23:43:41 by tal-achk          #+#    #+#             */
/*   Updated: 2025/07/26 23:55:23 by tal-achk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	seen_r_left(int r, int **map)
{
	int	highest;
	int	seen_buildings;
	int	j;
	int	height;

	highest = 0;
	seen_buildings = 0;
	j = 0;
	while (j < 4)
	{
		height = map[r][j];
		if (height > highest)
		{
			highest = height;
			seen_buildings++;
		}
		j++;
	}
	return (seen_buildings);
}

int	seen_r_right(int r, int **map)
{
	int	highest;
	int	seen_buildings;
	int	j;
	int	height;

	highest = 0;
	seen_buildings = 0;
	j = 3;
	while (j >= 0)
	{
		height = map[r][j];
		if (height > highest)
		{
			highest = height;
			seen_buildings++;
		}
		j--;
	}
	return (seen_buildings);
}

int	seen_c_top(int c, int **map)
{
	int	highest;
	int	seen_buildings;
	int	i;
	int	height;

	highest = 0;
	seen_buildings = 0;
	i = 0;
	while (i < 4)
	{
		height = map[i][c];
		if (height > highest)
		{
			highest = height;
			seen_buildings++;
		}
		i++;
	}
	return (seen_buildings);
}

int	seen_c_bottom(int c, int **map)
{
	int	highest;
	int	seen_buildings;
	int	i;
	int	height;

	highest = 0;
	seen_buildings = 0;
	i = 3;
	while (i >= 0)
	{
		height = map[i][c];
		if (height > highest)
		{
			highest = height;
			seen_buildings++;
		}
		i--;
	}
	return (seen_buildings);
}
