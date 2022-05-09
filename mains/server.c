/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <amaria-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:33:21 by amaria-m          #+#    #+#             */
/*   Updated: 2022/05/09 17:13:51 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minitalk.h>

// SIGUSR1 == 0
// SIGUSR2 == 1

int	main(void)
{
	int	pid_t;

	pid_t = getpid();
	ft_printf("%i\n", pid_t);
	signal(SIGUSR1, ft_read_signal);
	signal(SIGUSR2, ft_read_signal);
	while (1)
		pause();
	return (0);
}
