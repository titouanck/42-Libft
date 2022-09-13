/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:53:43 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 15:18:29 by tchevrie         ###   ########.fr       */
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

void	*calloc(size_t count, size_t size)
{
	return (ft_memalloc(count * size));
}

// #include <stdio.h>

// int	main(void)
// {
// 	void	*r = ft_memalloc(18);

// 	printf("%p\n", r);
// 	free(r);
// }
