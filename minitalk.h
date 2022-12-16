/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:02:21 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/12/16 18:15:56 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "libft/libft.h"
# include "printf/ft_printf.h"
# include <unistd.h>
# include <signal.h>
# include <stdio.h>

char	*to_binary(int character);
char	*convert_message(char *message, char *b_table);
void	char_bin(char *p, int c);
#endif