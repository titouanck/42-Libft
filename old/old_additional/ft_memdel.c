/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 17:40:06 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/19 15:56:19 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../old_includes/libft.h"
#include <stdlib.h>


#define ft_strlen strlen

void	ft_memdel(void **ap)
{
	if (ap && *ap)
		free(*ap);
	*ap = NULL;
}

// #include <stdio.h>

// int	main(void)
// {
// 	void	*ptr;
// 	size_t	i;

// 	ptr = malloc(10);
// 	if (!ptr)
// 		return (0);
// 	i = 0;
// 	while (i < (10 - 1))
// 	{
// 		*(unsigned char *)(ptr + i) = 'a';
// 		i++;
// 	}
// 	ft_memdel(&ptr);
// }

// static void	*ft_memcpy(void *dst, const void *src, size_t n)
// {
// 	size_t	i;

// 	i = 0;
// 	while (i < n)
// 	{
// 		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
// 		i++;
// 	}
// 	return (dst);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	char	**tab;

// 	tab = malloc(sizeof(char *) * 4);
// 	if (!tab)
// 		return (1);
// 	tab[0] = malloc(sizeof(char) * (ft_strlen("bonjour") + 1));
// 	tab[1] = malloc(sizeof(char) * (ft_strlen("au revoir") + 1));
// 	tab[2] = malloc(sizeof(char) * (ft_strlen("salut") + 1));
// 	tab[3] = 0;
// 	ft_memcpy(tab[0], "Bonjour", ft_strlen("Bonjour "));
// 	ft_memcpy(tab[1], "au revoir", ft_strlen("au revoir "));
// 	ft_memcpy(tab[2], "salut", ft_strlen("salut "));
// 	ft_memdel(tab);
// }
