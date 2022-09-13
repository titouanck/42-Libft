/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 01:12:14 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/11 01:16:36 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("%d : %d\n", isalnum(10), ft_isalnum(10));
// 	printf("%d : %d\n", isalnum('1'), ft_isalnum('1'));
// 	printf("%d : %d\n", isalnum(-3), ft_isalnum(-3));
// 	printf("%d : %d\n", isalnum('a'), ft_isalnum('a'));
// 	printf("%d : %d\n", isalnum('Z'), ft_isalnum('Z'));
// 	printf("%d : %d\n", isalnum('5'), ft_isalnum('5'));
// 	printf("%d : %d\n", isalnum('0'), ft_isalnum('0'));
// }
