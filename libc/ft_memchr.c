/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:30:51 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/09 16:53:58 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	c = '.'; // {' ', ?, b, .};
// 	char	s[] = "Bien le bonjour.";
// 	size_t	len = ft_strlen(s);

// 	printf("%s : %s\n", (unsigned char *) memchr(s, c, len), 
// 	(unsigned char *) ft_memchr(s, c, len));

// 	printf("%p : %p\n", (unsigned char *) memchr(s, c, len), 
// 	(unsigned char *) ft_memchr(s, c, len));
// }