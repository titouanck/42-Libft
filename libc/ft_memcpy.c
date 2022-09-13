/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:00:16 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/12 15:37:22 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dst);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dst1[] = "......................";
// 	char	src1[] = "Bien le bonjour.";

// 	printf("ft_memcpy :\n");
// 	printf("%s\n", (unsigned char *)ft_memcpy(dst1, src1, ft_strlen(src1)));
// 	printf("dst : %s\n", dst1);
// 	printf("src : %s\n\n", src1);

// 	char	dst2[] = "......................";
// 	char	src2[] = "Bien le bonjour.";

// 	printf("memcpy :\n");
// 	printf("%s\n", (unsigned char *)memcpy(dst2, src2, ft_strlen(src2)));
// 	printf("dst : %s\n", dst2);
// 	printf("src : %s\n\n", src2);

// 	char	test1[] = "Voila un test.";
// 	char	test2[] = "Voila un test.";
// 	char	test3[] = "Voila un test.";
// 	char	test4[] = "Voila un test.";

// 	memcpy(test1 + 3, test1, ft_strlen(test1) - 3);
// 	ft_memcpy(test2 + 3, test2, ft_strlen(test2) - 3);
// 	memmove(test3 + 3, test3, ft_strlen(test3) - 3);
// 	ft_memmove(test4 + 3, test4, ft_strlen(test4) - 3);
// 	printf("memcpy : %s\n", test1);
// 	printf("ft_memcpy : %s\n", test2);
// 	printf("memmove : %s\n", test3);
// 	printf("ft_memmove : %s\n", test4);
// }
