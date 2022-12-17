/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:02:21 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/12/17 17:56:24 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "libft/libft.h"
# include "printf/ft_printf.h"
# include <unistd.h>
# include <signal.h>
# include <stdio.h>

/*typedef struct vars {
	static char	bin_char;
	static int	i = 7;
	static int	pid = 0;
}				t_vars; */

char	*to_binary(int character);
char	*convert_message(char *message, char *b_table);
void	char_bin(char *p, int c);
#endif