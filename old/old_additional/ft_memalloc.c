/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 17:32:15 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 15:25:43 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../old_includes/libft.h"

void	*ft_memalloc(size_t size)
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

// #include <stdio.h>

// int	main(void)
// {
// 	void	*r = ft_memalloc(18);

// 	printf("%p\n", r);
// 	free(r);
// }
