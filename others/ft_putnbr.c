/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:10:03 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/20 16:56:01 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static void	print_nb(long nb)
{
	if (nb / 10)
	{
		print_nb(nb / 10);
		print_nb(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void	ft_putnbr(const int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	print_nb(nb);
}
