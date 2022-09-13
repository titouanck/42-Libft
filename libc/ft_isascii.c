/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 01:17:31 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/11 01:20:51 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("%d : %d\n", isascii(0), ft_isascii(0));
// 	printf("%d : %d\n", isascii(127), ft_isascii(127));
// 	printf("%d : %d\n", isascii('a'), ft_isascii('a'));
// 	printf("%d : %d\n", isascii('Z'), ft_isascii('Z'));
// 	printf("%d : %d\n", isascii('\t'), ft_isascii('\t'));
// 	printf("%d : %d\n", isascii(-1), ft_isascii(-1));
// 	printf("%d : %d\n", isascii(128), ft_isascii(128));
// }
