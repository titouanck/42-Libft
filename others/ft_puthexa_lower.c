/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_lower.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:21:01 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/20 22:23:51 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_puthexa_lower(const unsigned long n)
{
	if (n / 16)
		return (ft_puthexa_lower(n / 16) + ft_puthexa_lower(n % 16));
	else if (!(n / 10))
		ft_putchar(n + '0');
	else
		ft_putchar((char) n - 10 + 'a');
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	ft_puthexa_lower(423413568887654);
// }
