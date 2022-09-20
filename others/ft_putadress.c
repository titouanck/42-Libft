/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:41:38 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/20 22:25:41 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_putadress(void *adress)
{
	ft_putstr("0x");
	return (2 + ft_puthexa_lower((unsigned long) adress));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;

// 	str = "Bonjour";
// 	printf("%p\n", str);
// 	ft_putadress(str);
// }
