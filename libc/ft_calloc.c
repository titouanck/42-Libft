/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:53:43 by tchevrie          #+#    #+#             */
/*   Updated: 2022/10/04 15:09:57 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static void	*ft_memalloc(size_t size)
{
	void	*new;
	size_t	i;

	new = (void *) malloc(size);
	if (!new)
		return (NULL);
	i = 0;
	while (i < size)
	{
		*(unsigned char *)(new + i) = 0;
		i++;
	}
	return (new);
}

void	*ft_calloc(size_t count, size_t size)
{
	if ((count == SIZE_MAX && size > 1) || (size == SIZE_MAX && count > 1))
		return (NULL);
	return (ft_memalloc(count * size));
}

// #include <stdio.h>

// int	main(void)
// {	
	// void	*c = calloc(SIZE_MAX, SIZE_MAX);
	// void	*ft_c = ft_calloc(SIZE_MAX, SIZE_MAX);

	// printf("llu : %llu\n", (unsigned long long) SIZE_MAX + 1);
	// printf("%p, %p\n", c, ft_c);
	// if (c)
	// 	free(c);
	// if (ft_c)
	// 	free(ft_c);
// }
