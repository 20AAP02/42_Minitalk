/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <amaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:53:10 by amaria-m          #+#    #+#             */
/*   Updated: 2022/05/05 19:53:17 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minitalk.h>

void	ft_send_char(int pid_t, char a)
{
	while (a-- > 0)
	{
		if (kill(pid_t, SIGUSR2) < 0)
			exit(0);
	}
	if (kill(pid_t, SIGUSR1) < 0)
		exit(0);
}
