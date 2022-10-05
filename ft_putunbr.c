/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:10:03 by tchevrie          #+#    #+#             */
/*   Updated: 2022/10/05 04:34:07 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putunbr(const unsigned int n)
{
	if (n / 10)
		return (ft_putunbr(n / 10) + ft_putunbr(n % 10));
	else
		return (ft_putchar(n + '0'));
}
