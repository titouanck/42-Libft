/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 00:52:07 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/11 01:11:04 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	int		c1;
// 	char	c2;
// 	int		c3;
// 	char	c4;
// 	int		c5;
// 	char	c6;

// 	c1 = 0;
// 	c2 = 'e';
// 	c3 = -3;
// 	c4 = '2';
// 	c6 = '9';
// 	printf("%d : %d\n", isdigit(c1), ft_isdigit(c1));
// 	printf("%d : %d\n", isdigit(c2), ft_isdigit(c2));
// 	printf("%d : %d\n", isdigit(c3), ft_isdigit(c3));
// 	printf("%d : %d\n", isdigit(c4), ft_isdigit(c4));
// 	printf("%d : %d\n", isdigit(c5), ft_isdigit(c5));
// 	printf("%d : %d\n", isdigit(c6), ft_isdigit(c6));
// }
