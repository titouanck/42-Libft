/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:55:13 by tchevrie          #+#    #+#             */
/*   Updated: 2022/10/03 20:47:27 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i))
		i++;
	if (i < n)
		return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char s[] = {-128, 0, 127, 0};
// 	char sCpy[] = {-128, 0, 127, 0};
// 	char s2[] = {0, 0, 127, 0};
// 	char s3[] = {0, 0, 42, 0};

// 	printf("1 %d : %d\n", memcmp(s, sCpy, 4), ft_memcmp(s, sCpy, 4));
// 	printf("2 %d : %d\n", memcmp(s, s2, 0), ft_memcmp(s, s2, 0));
// 	printf("3 %d : %d\n", memcmp(s, s2, 1), ft_memcmp(s, s2, 1));
// 	printf("4 %d : %d\n", memcmp(s2, s, 1), ft_memcmp(s2, s, 1));
// 	printf("5 %d : %d\n", memcmp(s2, s3, 4), ft_memcmp(s2, s3, 4));
// }

	// char	s1[] = "t a";
	// char	s2[] = "v q";
	// size_t	len = 1;

	// printf("%d : %d\n", memcmp(s1, s2, len), ft_memcmp(s1, s2, len));