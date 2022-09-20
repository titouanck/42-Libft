/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:10:03 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/20 22:22:22 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_putunbr(const unsigned int n)
{
	if (n / 10)
	{
		return (ft_putunbr(n / 10) + ft_putunbr(n % 10));
	}
	else
	{
		ft_putchar(n + '0');
		return (1);
	}
}

// int	main(void)
// {
// 	ft_putunbr(10);
// }
