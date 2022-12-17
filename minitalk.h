/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:02:21 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/12/17 19:41:42 by ahmaymou         ###   ########.fr       */
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

void	handle_usr1(int sig);
void	handle_sigusr1(int sig, siginfo_t *info, void *context);
void	char_bin(char *p, int c);
#endif