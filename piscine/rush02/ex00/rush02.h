/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnasr <tnasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 12:12:46 by tnasr             #+#    #+#             */
/*   Updated: 2025/08/03 12:12:46 by tnasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_dict
{
	char	*num;
	char	*word;
}	t_dict;

void	ft_putchar(char c);
void	ft_putstr(char *s);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		is_valid_number(char *str);
char	*ft_strtrim(char *str);
char	*get_scale_word(t_dict *dict, int size, int group_index);

int		read_dict(char *filename, t_dict *dict, char *buf, int bufsize);
char	*find_word(t_dict *dict, int size, char *num);
void	print_with_space(char *word, int *first);
void	convert_number(t_dict *dict, int size, char *num, int i);
int		handle_hundreds(t_dict *dict, int size, char *grp, int *first);
void	handle_tens_units(t_dict *dict, int size, char *grp, int *first);

#endif
