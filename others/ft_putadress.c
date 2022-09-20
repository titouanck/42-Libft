/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:41:38 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/20 17:21:21 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putadress(void *adress)
{
	ft_putstr("0x");
	ft_puthexa_lower((unsigned long) adress);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;

// 	str = "Bonjour";
// 	printf("%p\n", str);
// 	ft_putadress(str);
// }
