/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 05:42:06 by dmillan           #+#    #+#             */
/*   Updated: 2022/03/28 09:20:57 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>

void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(const char *s, int fd);
void		ft_putendl_fd(const char *s, int fd);
size_t		ft_strlen(const char *s);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_strcmp(const char *s1, const char *s2);
void		*ft_calloc(size_t nmemb, size_t size);
int			ft_atoi(const char *nptr);
long long	ft_atoll(const char *nptr);
char		*ft_itoa(int n);
int			ft_isdigit(int c);
void		ft_bzero(void *s, size_t n);
void		*ft_memset(void *s, int c, size_t n);

#endif