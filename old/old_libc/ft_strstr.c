/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 23:38:26 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 15:26:53 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../old_includes/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	len;
	size_t	i;
	size_t	j;

	len = ft_strlen(needle);
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] && haystack[i + j] == needle[j])
			j++;
		if (j == len)
			return ((char *) haystack + i);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s1[] = "Bonjour a tous les Titouan.";
// 	char 	s2[] = "B";

// 	printf("%s", ft_strstr(s1, s2));
// }
