/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:10:03 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/20 22:21:19 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	print_nb(long nb)
{
	if (nb / 10)
		return (print_nb(nb / 10) + print_nb(nb % 10));
	else
	{
		ft_putchar(nb + '0');
		return (1);
	}
}

size_t	ft_putnbr(const int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		return (1 + print_nb(nb));
	}
	else
		return (print_nb(nb));
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("[%lu]\n", ft_putnbr(-0));
// }
