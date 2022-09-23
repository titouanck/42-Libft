/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:01:46 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 15:26:29 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../old_includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	index;
	size_t	i;

	index = 0;
	while (s1[index])
		index++;
	i = 0;
	while (s2[i])
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

// 	printf("%s : %s\n\n", strcat(s1, s2), ft_strcat(ss1, ss2));
// 	printf("%s, %s\n", s1, s2);
// 	printf("%s, %s\n\n", ss1, ss2);
// }
