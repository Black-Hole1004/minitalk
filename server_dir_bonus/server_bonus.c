/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:21:11 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/12/17 19:24:39 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	handle_sigusr1(int sig, siginfo_t *info, void *context)
{
	static char		bin_char;
	static int		i = 7;
	static int		pid = 0;

	(void) context;
	if (!pid)
		pid = info->si_pid;
	if (info->si_pid != pid)
	{
		bin_char = 0;
		i = 7;
		pid = info->si_pid;
	}
	if (sig == 30)
		bin_char += (1 << i);
	if (!i)
	{
		if (bin_char == 0)
			kill(pid, SIGUSR1);
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
	struct sigaction	sa;

	pid = getpid();
	ft_printf("%d\n", pid);
	sa.sa_flags = SA_SIGINFO;
	sa.sa_flags = SA_RESTART;
	sa.sa_sigaction = handle_sigusr1;
	if (sigaction(SIGUSR1, &sa, 0) < 0)
		return (EXIT_FAILURE);
	if (sigaction(SIGUSR2, &sa, 0) < 0)
		return (EXIT_FAILURE);
	while (1)
		pause ();
}
