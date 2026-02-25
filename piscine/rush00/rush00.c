/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasidani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 18:35:25 by hasidani          #+#    #+#             */
/*   Updated: 2025/07/20 19:56:09 by hasidani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	draw(int c, char s, char m);

void	rush(int x, int y);

void	draw(int c, char s, char m)
{
	int	i;

	i = 1;
	while (i <= c)
	{
		if (i == 1 || i == c)
			ft_putchar(s);
		else
			ft_putchar(m);
		i++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x == 0 || y == 0)
	{
		write(1, "No null value allowed.", 22);
		return ;
	}
	else if (x < 0 || y < 0)
	{
		write(1, "No negative value allowed.", 27);
		return ;
	}
	else
	{
		while (i <= y)
		{
			if (i == 1 || i == y)
				draw(x, 'o', '-');
			else
				draw(x, '|', ' ');
			ft_putchar('\n');
			i++;
		}
	}
}
