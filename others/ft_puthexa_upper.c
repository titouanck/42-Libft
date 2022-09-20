/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_upper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:21:01 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/20 17:28:06 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_puthexa_upper(const unsigned long n)
{
	if (n / 16)
	{
		ft_puthexa_upper(n / 16);
		ft_puthexa_upper(n % 16);
	}
	else if (!(n / 10))
		ft_putchar(n + '0');
	else
		ft_putchar((char) n - 10 + 'A');
}

// #include <stdio.h>

// int	main(void)
// {
// 	ft_puthexa_upper(423413568887654);
// }
