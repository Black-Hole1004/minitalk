/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:58:00 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/12/16 18:20:56 by ahmaymou         ###   ########.fr       */
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

void	handle_sigusr1(int sig)
{
	static char	bin_char;
	static int	i = 7;

	if (sig == 30)
		bin_char |= (1 << i);
	if (!i)
	{
		ft_printf("%c", bin_char);
		i = 7;
		bin_char = 0;
	}
	else
		i--;
}

int	main(void)
{
	pid_t				pid;

	pid = getpid();
	ft_printf("%d\n", pid);
	signal(SIGUSR1, handle_sigusr1);
	signal(SIGUSR2, handle_sigusr1);
	while (1)
		pause ();
}
