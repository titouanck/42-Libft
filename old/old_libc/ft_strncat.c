/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:15:11 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 15:26:37 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../old_includes/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	index;
	size_t	i;

	index = 0;
	while (s1[index])
		index++;
	i = 0;
	while (s2[i] && i < n)
	{
		s1[index + i] = s2[i];
		i++;
	}
	s1[index + i] = '\0';
	return (s1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s1[] = "Phrase une\0 Pas grand chose d'autre.";
// 	char	s2[] = "Deuxieme phrase ici haha\0 On rigole bien.";
// 	char	ss1[] = "Phrase une\0 Pas grand chose d'autre.";
// 	char	ss2[] = "Deuxieme phrase ici haha\0 On rigole bien.";

// 	printf("%s : %s\n\n", strncat(s1, s2, 4), ft_strncat(ss1, ss2, 4));
// 	printf("%s, %s\n", s1, s2);
// 	printf("%s, %s\n\n", ss1, ss2);
// }
