/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_signal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <amaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:55:32 by amaria-m          #+#    #+#             */
/*   Updated: 2022/05/06 16:35:54 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minitalk.h>

void	ft_read_signal(int signal)
{
	static char	letter;

	if (signal == SIGUSR2)
	{
		letter++;
	}
	else if (signal == SIGUSR1 && letter == 0)
	{
		letter = '\n';
		write(1, &letter, 1);
		letter = 0;
	}
	else
	{
		write(1, &letter, 1);
		letter = 0;
	}
}