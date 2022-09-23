/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:59:52 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 15:56:36 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../old_includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*buf;
	size_t	i;

	buf = (void *) malloc(sizeof(unsigned char) * (len));
	if (!buf)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(unsigned char *)(buf + i) = *(unsigned char *)(src + i);
		i++;
	}
	i = 0;
	while (i < len)
	{
		*(unsigned char *)(dst + i) = *(unsigned char *)(buf + i);
		i++;
	}
	free (buf);
	return (dst);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dst1[] = "......................";
// 	char	src1[] = "Bien le bonjour.";

// 	printf("ft_memmove :\n");
// 	printf("r : %s\n", 
// / (unsigned char *)ft_memmove(dst1, src1, ft_strlen(src1)));
// 	printf("dst : %s\n", dst1);
// 	printf("src : %s\n\n", src1);

// 	char	dst2[] = "......................";
// 	char	src2[] = "Bien le bonjour.";

// 	printf("memmove :\n");
// 	printf("r : %s\n", (unsigned char *)memmove(dst2, src2, ft_strlen(src2)));
// 	printf("dst : %s\n", dst2);
// 	printf("src : %s\n\n", src2);

// 	char	dst3[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

// 	printf("ft_memmove :\n");
// 	printf("r : %s\n", (unsigned char *)ft_memmove(dst3 + 3, dst3, 2));
// 	printf("dst/src : %s\n\n", dst3);

// 	char	dst4[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

// 	printf("memmove :\n");
// 	printf("r : %s\n", (unsigned char *)memmove(dst4 + 3, dst4, 2));
// 	printf("dst/src : %s\n\n", dst4);

// 	char	dst5[] = "abcdefghijklmnopqrstuvwxyz";

// 	printf("ft_memmove :\n");
// 	printf("r : %s\n", 
// / (unsigned char *)ft_memmove(dst5, dst5 + 3, ft_strlen(dst5 + 3)));
// 	printf("dst/src : %s\n\n", dst5);

// 	char	dst6[] = "abcdefghijklmnopqrstuvwxyz";

// 	printf("memmove :\n");
// 	printf("r : %s\n", 
// / (unsigned char *)memmove(dst6, dst6 + 3, ft_strlen(dst5 + 3)));
// 	printf("dst/src : %s\n\n", dst6);
// }
