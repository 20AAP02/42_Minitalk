/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <amaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:53:10 by amaria-m          #+#    #+#             */
/*   Updated: 2022/05/06 17:47:07 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minitalk.h>

// void	ft_send_char(int pid_t, char a)
// {
// 	while (a--)
// 	{
// 		kill(pid_t, SIGUSR2);
// 		usleep(WAIT_TIME);
// 	}
// }

void	ft_send_char(int pid_t, char a)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if (a & (1 << bit))
			kill(pid_t, SIGUSR2);
		else
			kill(pid_t, SIGUSR1);
		usleep(WAIT_TIME);
		bit++;
	}
	
}
