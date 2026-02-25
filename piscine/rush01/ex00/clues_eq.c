/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clues_eq.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tal-achk <tal-achk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 22:45:45 by tal-achk          #+#    #+#             */
/*   Updated: 2025/07/27 20:00:56 by tal-achk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	seen_r_left(int r, int **map);
int	seen_r_right(int r, int **map);
int	seen_c_top(int c, int **map);
int	seen_c_bottom(int c, int **map);

int	clues_equality(int **map, int clues[16])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if ((seen_c_top(i, map) != clues[i])
			|| (seen_c_bottom(i, map) != clues[4 + i])
			|| (seen_r_left(i, map) != clues[8 + i])
			|| (seen_r_right(i, map) != clues[12 + i]))
			return (0);
		i++;
	}
	return (1);
}
