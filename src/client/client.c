/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 06:44:54 by dmillan           #+#    #+#             */
/*   Updated: 2022/03/28 10:18:03 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <client.h>
#include <unistd.h>
#include <libft.h>
#include <signal.h>

static void	send_char(int pid, char character)
{
	int	current_bit;

	current_bit = 0;
	while (current_bit < 8)
	{
		if (character & (1 << current_bit))
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(80);
		current_bit++;
	}
}

void	send_message(struct s_args *args)
{
	size_t	i;

	i = 0;
	while (args->str[i])
	{
		send_char(args->pid, args->str[i]);
		i++;
	}
	send_char(args->pid, '\n');
}

static int	is_numerical(const char *str)
{
	size_t	i;
	int		not_empty;

	not_empty = 0;
	i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]))
			not_empty = 1;
		else
			return (0);
		i++;
	}
	return (not_empty);
}

int	parse_args(struct s_args *args, int argc, char *argv[])
{
	if (!args || argc != 3 || !is_numerical(argv[1]))
		return (0);
	args->pid = ft_atoi(argv[1]);
	args->str = argv[2];
	return (1);
}

int	main(int argc, char *argv[])
{
	struct s_args	args;

	if (!parse_args(&args, argc, argv))
	{
		ft_putendl_fd("Invalid arguments. Please write: ", 2);
		ft_putendl_fd("./client <server PID> <text>", 2);
		return (1);
	}
	send_message(&args);
	return (0);
}
