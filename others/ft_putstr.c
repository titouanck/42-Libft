/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:11:29 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/20 22:18:14 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_putstr(const char *str)
{
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		write(1, str, ft_strlen(str));
		return (ft_strlen(str));
	}
}
