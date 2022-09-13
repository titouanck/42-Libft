/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:55:13 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/09 17:14:48 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (*(unsigned char *)(s1 + 1) && i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s1[] = "t a";
// 	char	s2[] = "v q";
// 	size_t	len = 1;

// 	printf("%d : %d\n", memcmp(s1, s2, len), ft_memcmp(s1, s2, len));
// }