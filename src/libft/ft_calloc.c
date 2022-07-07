/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 03:11:48 by eleon             #+#    #+#             */
/*   Updated: 2022/03/28 10:19:59 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

#include <libft.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	s_allocated;
	void	*allocated;

	if (!nmemb || !size)
	{
		nmemb = 1;
		size = 1;
	}
	s_allocated = nmemb * size;
	if (s_allocated <= 0)
		return (NULL);
	allocated = malloc(s_allocated);
	if (allocated)
	{
		ft_bzero(allocated, s_allocated);
		return (allocated);
	}
	else
		return (NULL);
}
