/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <amaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:57:34 by amaria-m          #+#    #+#             */
/*   Updated: 2022/05/05 20:14:35 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minitalk.h>

void	ft_send_len(int pid_t, char *str)
{
	int len;

	len  = 0;

	len = ft_strlen(str);
	printf("len: %i\n", len);
	while (len)
	{
		if (kill(pid_t, SIGUSR2) < 0)
			exit(0);
		len--;

	}
	kill(pid_t, SIGUSR1);
}
