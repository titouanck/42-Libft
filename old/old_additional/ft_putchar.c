/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:04:31 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 15:25:48 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../old_includes/libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// int	main(void)
// {
// 	ft_putchar('T');
// 	ft_putchar('i');
// 	ft_putchar('t');
// 	ft_putchar('o');
// 	ft_putchar('u');
// 	ft_putchar('a');
// 	ft_putchar('n');
// }
