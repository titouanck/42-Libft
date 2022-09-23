/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:10:03 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 15:25:52 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../old_includes/libft.h"

static void	print_nb(long nb)
{
	if (nb > 10)
	{
		print_nb(nb / 10);
		print_nb(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void	ft_putnbr(int n)
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

// int	main(void)
// {
// 	ft_putnbr(-2147483648);
// 	ft_putchar('\n');
// 	ft_putnbr(2147483647);
// 	ft_putchar('\n');
// 	ft_putnbr(0);
// 	ft_putchar('\n');
// 	ft_putnbr(-1);
// 	ft_putchar('\n');
// 	ft_putnbr(1);
// 	ft_putchar('\n');
// 	ft_putnbr(2);
// 	ft_putchar('\n');
// 	ft_putnbr(2048);
// 	ft_putchar('\n');
// }
