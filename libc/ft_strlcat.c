/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:32:38 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/11 01:55:44 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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

// #include <stdio.h>

// int	main(void)
// {
// 	char	s1[] = "Phrase une\0 Pas grand chose d'autre.";
// 	char	s2[] = "Deuxieme phrase ici haha\0 On rigole bien.";
// 	char	ss1[] = "Phrase une\0 Pas grand chose d'autre.";
// 	char	ss2[] = "Deuxieme phrase ici haha\0 On rigole bien.";

// 	printf("%lu : %lu\n\n", strlcat(s1, s2, 18), ft_strlcat(ss1, ss2, 18));
// 	printf("%s, %s\n", s1, s2);
// 	printf("%s, %s\n\n", ss1, ss2);
// }
