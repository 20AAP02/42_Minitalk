/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <amaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:34:02 by amaria-m          #+#    #+#             */
/*   Updated: 2022/05/05 18:50:53 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <libft.h>
# include <ft_printf.h> // ft_printf
# include <unistd.h> // getpid
# include <signal.h> // kill
# include <stdio.h> // printf

void	ft_send_char(int pid_t, char a);
void	ft_send_len(int pid_t, char *str);
int		ft_read_len(int len, int signal, int *len_checker, char *str);
int		ft_read_char(int len, int signal, char *str);
void	ft_read_signal(int signal);

#endif