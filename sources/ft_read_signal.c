/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_signal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <amaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:55:32 by amaria-m          #+#    #+#             */
/*   Updated: 2022/05/05 20:09:18 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minitalk.h>

void	ft_read_signal(int signal)
{
	//static char	*str;
	//static int	len_checker;
	static int	len;

	if (signal == SIGUSR2)
	{
		printf("S2\n");
		len++;
	}
	else
	{
		printf("%i\n", len);
		len = 0;
	}
	
}