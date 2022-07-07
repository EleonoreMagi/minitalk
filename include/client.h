/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 09:14:37 by dmillan           #+#    #+#             */
/*   Updated: 2022/03/28 09:40:29 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLIENT_H
# define CLIENT_H

# include <stdbool.h>
# include <client.h>
# include <unistd.h>
# include <signal.h>
# include <libft.h>

# define DELAY 200

struct		s_args
{
	int		pid;
	char	*str;
};

int		parse_args(struct s_args *args, int argc, char *argv[]);
void	send_message(struct s_args *args);

#endif