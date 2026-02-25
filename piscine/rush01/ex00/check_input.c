/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tal-achk <tal-achk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 00:01:04 by tal-achk          #+#    #+#             */
/*   Updated: 2025/07/27 20:36:01 by tal-achk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_input(char *str, int clues[16])
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			if (count >= 16)
				return (0);
			clues[count++] = str[i] - '0';
			i++;
			if (str[i] != ' ' && str[i] != '\0')
				return (0);
		}
		else if (str[i] == ' ')
			i++;
		else
			return (0);
	}
	if (count != 16)
		return (0);
	return (1);
}
