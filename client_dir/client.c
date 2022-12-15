/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:57:54 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/12/15 16:37:45 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	client(int pid, char *string)
{
	pid = pid + 1;
	printf("%s\n", string);
}

int	main(void)
{
	return (0);
}
