/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <amaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:15:17 by amaria-m          #+#    #+#             */
/*   Updated: 2022/05/05 20:00:05 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minitalk.h>

int	ft_read_len(int len, int signal, int *len_checker, char *str)
{
	if (signal == SIGUSR1)
	{
		str = malloc(sizeof(char) * (len + 1));
		str[len] = '\0';
		*len_checker = 1;
	}
	printf("len2: %i\n", len);
	return (len + (SIGUSR2 == signal));
}
