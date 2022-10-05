/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:34:16 by tchevrie          #+#    #+#             */
/*   Updated: 2022/10/05 04:32:47 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
