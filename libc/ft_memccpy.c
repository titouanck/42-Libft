/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:34:16 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/11 01:54:57 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memccpy(void *d, const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *(unsigned char *)(s + i))
	{
		*(unsigned char *)(d + i) = *(unsigned char *)(s + i);
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return (d + i + 1);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	c = '!'; // {u, z, ., !}

// 	char	d1[] = ".............";
// 	char	s1[] = "Bonjour !";

// 	printf("ft_memccpy :\n");
// 	printf("r : %s\n", (unsigned char *)ft_memccpy(d1, s1, c, ft_strlen(s1)));
// 	printf("d : %s\n", d1);
// 	printf("d : %s\n\n", s1);

// 	char	d2[] = ".............";
// 	char	s2[] = "Bonjour !";

// 	printf("memccpy :\n");
// 	printf("r : %s\n", (unsigned char *)memccpy(d2, s2, c, ft_strlen(s2)));
// 	printf("d : %s\n", d2);
// 	printf("d : %s\n\n", s2);
// }