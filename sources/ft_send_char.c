/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <amaria-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:53:10 by amaria-m          #+#    #+#             */
/*   Updated: 2022/05/09 17:10:29 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minitalk.h>

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
