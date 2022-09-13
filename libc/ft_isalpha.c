/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 00:52:07 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/11 01:06:11 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
// 	c3 = 'A';
// 	c4 = 'z';
// 	c6 = '9';
// 	printf("%d : %d\n", isalpha(c1), ft_isalpha(c1));
// 	printf("%d : %d\n", isalpha(c2), ft_isalpha(c2));
// 	printf("%d : %d\n", isalpha(c3), ft_isalpha(c3));
// 	printf("%d : %d\n", isalpha(c4), ft_isalpha(c4));
// 	printf("%d : %d\n", isalpha(c5), ft_isalpha(c5));
// }
