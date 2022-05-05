/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <amaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:20:01 by amaria-m          #+#    #+#             */
/*   Updated: 2022/05/05 18:11:33 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minitalk.h>

int	ft_read_char(int len, int signal, char *str)
{
	static int	letter;
	static int	i;

	if (signal == SIGUSR1)
	{
		str[i++] = (char)letter;
		letter = 0;
		len -= 1;
	}
	else
	{
		letter++;
	}
	return (len);
}