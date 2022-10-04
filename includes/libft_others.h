/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_others.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 23:57:38 by tchevrie          #+#    #+#             */
/*   Updated: 2022/10/04 23:58:52 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_OTHERS_H
# define LIBFT_OTHERS_H

# include "libft_bonus.h"

size_t	ft_putchar(const char c);
size_t	ft_putstr(const char *str);
size_t	ft_putnbr(const int n);
size_t	ft_putunbr(const unsigned int n);
size_t	ft_puthexa_lower(const unsigned int n);
size_t	ft_puthexa_upper(const unsigned int n);
size_t	ft_putadress(void *adress);
size_t	ft_strlen(const char *s);

#endif