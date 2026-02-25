/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasidani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 18:35:25 by hasidani          #+#    #+#             */
/*   Updated: 2025/07/20 20:36:29 by hasidani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	draw(int c, char s, char m, char e);

void	rush(int x, int y);

void	draw(int c, char s, char m, char e)
{
	int	i;

	i = 1;
	while (i <= c)
	{
		if (i == 1)
			ft_putchar(s);
		else if (i == c)
			ft_putchar(e);
		else
			ft_putchar(m);
		i++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x < 0 || y < 0 || x == 0 || y == 0)
	{
		write(1, "No negative and null values allowed.", 36);
		return ;
	}
	else
	{
		while (i <= y)
		{
			if (i == 1)
				draw(x, 'A', 'B', 'A');
			else if (i == y)
				draw(x, 'C', 'B', 'C');
			else
				draw(x, 'B', ' ', 'B');
			ft_putchar('\n');
			i++;
		}
	}
}
