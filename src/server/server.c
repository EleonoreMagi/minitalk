/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 06:20:49 by dmillan           #+#    #+#             */
/*   Updated: 2022/03/28 10:16:39 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <server.h>
#include <libft.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>

void	ft_display_pid(void)
{
	pid_t	pid;
	char	*str_pid;

	pid = getpid();
	str_pid = ft_itoa(pid);
	if (!str_pid)
	{
		ft_putendl_fd("Error at ft_itoa()", 2);
		return ;
	}
	ft_putendl_fd("Server PID: ", 1);
	ft_putendl_fd(str_pid, 1);
	free(str_pid);
}

static void	ft_handler_msg(int sig)
{
	static struct s_char	chr;

	if (sig == SIGUSR2)
		chr.character |= 1 << chr.current_bit;
	chr.current_bit++;
	if (chr.current_bit == 8)
	{
		ft_putchar_fd(chr.character, 1);
		chr.character = 0;
		chr.current_bit = 0;
	}
}

int	main(void)
{
	ft_display_pid();
	signal(SIGUSR1, ft_handler_msg);
	signal(SIGUSR2, ft_handler_msg);
	while (1)
		pause();
	return (0);
}
