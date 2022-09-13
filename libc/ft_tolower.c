/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 01:43:20 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/11 01:58:10 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && 'Z' >= c)
		return (c + 'a' - 'A');
	return (c);
}

// #include <stdio.h>
// #include "ctype.h"

// int	main(void)
// {
// 	printf("%d : %d\n", tolower(1), ft_tolower(1));
// 	printf("%d : %d\n", tolower(10), ft_tolower(10));
// 	printf("%d : %d\n", tolower(100), ft_tolower(100));
// 	printf("%d : %d\n", tolower('a'), ft_tolower('a'));
// 	printf("%d : %d\n", tolower('Z'), ft_tolower('Z'));
// 	printf("%d : %d\n", tolower('7'), ft_tolower('7'));
// 	printf("%d : %d\n", tolower(0), ft_tolower(0));
// 	printf("%d : %d\n", tolower(127), ft_tolower(127));
// }
