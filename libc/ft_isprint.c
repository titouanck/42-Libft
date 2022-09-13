/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 01:26:38 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/11 01:33:16 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && 126 >= c)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("%d : %d\n", isprint(0), ft_isprint(0));
// 	printf("%d : %d\n", isprint(-4), ft_isprint(-4));
// 	printf("%d : %d\n", isprint(12), ft_isprint(12));
// 	printf("%d : %d\n", isprint(98), ft_isprint(98));
// 	printf("%d : %d\n", isprint(127), ft_isprint(127));
// 	printf("%d : %d\n", isprint(0), ft_isprint(0));
// }
