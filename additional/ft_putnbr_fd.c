/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:39:18 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 14:26:51 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static void	print_nb(long nb, int fd)
{
	if (nb > 10)
	{
		print_nb(nb / 10, fd);
		print_nb(nb % 10, fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	print_nb(nb, fd);
}

// int	main(void)
// {
// 	int	fd;

// 	fd = open("test.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
// 	if (fd == -1)
// 		return (1);
// 	ft_putstr("...\n");
// 	ft_putnbr_fd(42, fd);
// }
