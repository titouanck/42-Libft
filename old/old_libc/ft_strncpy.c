/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:55:36 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 15:26:51 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../old_includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	d1[] = "Bonjour !";
// 	char	s1[] = "Salut !";
// 	char	d2[] = "Bonjour !";
// 	char	s2[] = "Salut !";

// 	printf("%s : %s\n", strncpy(d1, s1, 3), ft_strncpy(d2, s2, 3));
// }
