/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnasr <tnasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 12:12:51 by tnasr             #+#    #+#             */
/*   Updated: 2025/08/03 12:12:51 by tnasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	open_and_read(char *filename, char *buf, int bufsize)
{
	int	fd;
	int	bytes;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (-1);
	bytes = read(fd, buf, bufsize - 1);
	close(fd);
	if (bytes <= 0)
		return (-1);
	buf[bytes] = '\0';
	return (bytes);
}

char	*find_colon(char *line)
{
	while (*line && *line != ':')
		line++;
	return (line);
}

char	*skip_to_next_line(char *line)
{
	while (*line && *line != '\n')
		line++;
	if (*line == '\n')
	{
		*line = '\0';
		line++;
	}
	return (line);
}

int	read_dict(char *filename, t_dict *dict, char *buf, int bufsize)
{
	int		count;
	char	*line;
	char	*colon;

	if (open_and_read(filename, buf, bufsize) < 0)
		return (-1);
	count = 0;
	line = buf;
	while (*line)
	{
		colon = find_colon(line);
		if (!*colon)
			break ;
		*colon = '\0';
		dict[count].num = ft_strtrim(line);
		line = colon + 1;
		line = skip_to_next_line(line);
		dict[count].word = ft_strtrim(colon + 1);
		count++;
	}
	return (count);
}
