/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:20:37 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/12 10:46:53 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	if (!b)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(unsigned char *)(b + i) = (unsigned char) c;
		i++;
	}
	return (b);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	src;
// 	int	dest;

// 	src = -1;
// 	dest = 21;
// 	ft_memset(&dest, src, sizeof(int));
// 	printf("%d : ", dest);
// 	memset(&dest, src, sizeof(int));
// 	printf("%d\n", dest);

// 	src = 0;
// 	dest = 21;
// 	ft_memset(&dest, src, sizeof(int));
// 	printf("%d : ", dest);
// 	memset(&dest, src, sizeof(int));
// 	printf("%d\n", dest);

// 	src = 1;
// 	dest = 21;
// 	ft_memset(&dest, src, sizeof(int));
// 	printf("%d : ", dest);
// 	memset(&dest, src, sizeof(int));
// 	printf("%d\n", dest);

// 	src = 42;
// 	dest = 21;
// 	ft_memset(&dest, src, sizeof(int));
// 	printf("%d : ", dest);
// 	memset(&dest, src, sizeof(int));
// 	printf("%d\n", dest);
// }