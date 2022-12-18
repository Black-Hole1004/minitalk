/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:21:08 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/12/18 12:30:03 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	handle_usr1(int sig)
{
	if (sig == 30)
		printf("got the acknowledgement , message sent successfully !\n");
}

void	char_bin(char *p, int c)
{
	int	i;

	i = 8;
	while (i--)
	{
		if (c & (1 << i))
			kill(ft_atoi(p), SIGUSR1);
		else
			kill(ft_atoi(p), SIGUSR2);
		usleep(500);
		signal(SIGUSR1, handle_usr1);
	}
}

int	main(int arc, char **argv)
{
	char				*message;

	if (arc < 3)
	{
		ft_printf("too few arguments !");
		return (EXIT_FAILURE);
	}
	message = argv[2];
	while (*message)
	{
		char_bin(argv[1], *message);
		message++;
	}
	char_bin(argv[1], *message);
	return (0);
}
