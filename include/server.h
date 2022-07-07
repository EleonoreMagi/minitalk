/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 05:55:21 by dmillan           #+#    #+#             */
/*   Updated: 2022/03/28 09:18:06 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_H
# define SERVER_H

# include <libft.h>
# include <unistd.h>
# include <signal.h>
# include <stdlib.h>

struct		s_char
{
	char	character;
	int		current_bit;
};

void		display_pid(void);

#endif