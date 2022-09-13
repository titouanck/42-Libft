/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:25:56 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/10 18:30:12 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = (ft_strlen(s) - 1);
	while (s[i])
	{
		if (s[i] == (char) c)
			break ;
		i--;
	}
	if (s[i] == (char) c)
		return ((char *) s + i);
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%p\n", ft_strrchr("bonjour toi !", '!'));
// 	printf("%p", strrchr("bonjour toi !", '!'));
// }
