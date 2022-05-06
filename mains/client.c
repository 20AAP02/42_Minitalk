/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <amaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:33:29 by amaria-m          #+#    #+#             */
/*   Updated: 2022/05/06 17:47:04 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minitalk.h>


int main(int argc, char **argv)
{
	int		pid_t;
	char	*str;

	if (argc != 3)
		return (ft_printf("invalid parameters\n"));
	if (ft_strlen(argv[1]))
		pid_t = ft_atoi(argv[1]);
	str = argv[2];
	while (str && *str)
	{
		ft_send_char(pid_t, *str);
		str++;
	}
	return (0);
}
