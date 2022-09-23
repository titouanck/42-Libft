/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:49:48 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 15:26:34 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../old_includes/libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	d1[] = "Bonjour !";
// 	char	s1[] = "Salut !";
// 	char	d2[] = "Bonjour !";
// 	char	s2[] = "Salut !";

// 	printf("%s : %s\n", strcpy(d1, s1), ft_strcpy(d2, s2));
// }
