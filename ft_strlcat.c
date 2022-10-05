/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:32:38 by tchevrie          #+#    #+#             */
/*   Updated: 2022/10/05 04:32:47 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t dstsize)
{
	size_t	dst_len;
	size_t	index;
	size_t	i;

	dst_len = ft_strlen(d);
	index = 0;
	while (d[index])
		index++;
	i = 0;
	while (s[i] && (i + index + 1) < (dstsize))
	{
		d[index + i] = s[i];
		i++;
	}
	if (i < dstsize)
		d[index + i] = '\0';
	if (dstsize <= dst_len)
		return (ft_strlen(s) + dstsize);
	else
		return (ft_strlen(s) + dst_len);
}
