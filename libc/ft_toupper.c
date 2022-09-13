/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 01:34:13 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/11 01:46:48 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && 'z' >= c)
		return (c - 'a' + 'A');
	return (c);
}

// #include <stdio.h>
// #include "ctype.h"

// int	main(void)
// {
// 	printf("%d : %d\n", toupper(1), ft_toupper(1));
// 	printf("%d : %d\n", toupper(10), ft_toupper(10));
// 	printf("%d : %d\n", toupper(100), ft_toupper(100));
// 	printf("%d : %d\n", toupper('a'), ft_toupper('a'));
// 	printf("%d : %d\n", toupper('Z'), ft_toupper('Z'));
// 	printf("%d : %d\n", toupper('7'), ft_toupper('7'));
// 	printf("%d : %d\n", toupper(0), ft_toupper(0));
// 	printf("%d : %d\n", toupper(127), ft_toupper(127));
// }
