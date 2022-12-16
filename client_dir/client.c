/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:57:54 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/12/16 19:56:44 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
◦ write
◦ ft_printf and any equivalent YOU coded
◦ signal
◦ sigemptyset
◦ sigaddset
◦ sigaction
◦ kill
◦ getpid
◦ malloc
◦ free
◦ pause
◦ sleep
◦ usleep
◦ exit 
*/
#include "../minitalk.h"

void	char_bin(char *p, int c)
{
	int	i;

	i = 8;
	while (i--)
	{
		if (c & (1 << i))
		{
			kill(ft_atoi(p), SIGUSR1);
		}
		else
		{
			kill(ft_atoi(p), SIGUSR2);
		}
		usleep(500);
	}
}

int	main(int arc, char **argv)
{
	char	*message;
	int		m_len_bin;

	if (arc < 3)
	{
		ft_printf("too few arguments !");
		return (EXIT_FAILURE);
	}
	m_len_bin = (ft_strlen(argv[2]) * 8) + 1;
	message = argv[2];
	while (*message)
	{
		char_bin(argv[1], *message);
		message++;
	}
	return (0);
}
