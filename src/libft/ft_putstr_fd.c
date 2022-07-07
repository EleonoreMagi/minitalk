/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 23:35:58 by dmillan           #+#    #+#             */
/*   Updated: 2022/03/28 06:09:59 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(const char *s, int fd)
{
	int	i;

	if (s)
	{
		i = 0;
		while (s[i])
			i++;
		write (fd, s, i);
	}
}
