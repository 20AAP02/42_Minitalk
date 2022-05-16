/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_signal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <amaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:55:32 by amaria-m          #+#    #+#             */
/*   Updated: 2022/05/12 18:57:13 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minitalk.h>

void	ft_read_signal(int signal)
{
	static char	letter;
	static int	bit;

	if (signal == SIGUSR2)
		letter |= (1 << bit);
	bit++;
	if (bit == 8)
	{
		write(1, &letter, 1);
		letter = 0;
		bit = 0;
	}
}
