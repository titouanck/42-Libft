/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:12:58 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 15:26:03 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../old_includes/libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	size_t	i;
	int		r;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	r = s1[i] - s2[i];
	if (r == 0)
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s1[] = "Voila une phrase.";
// 	char	s2[] = "voila une phrase.";
// 	char	s3[] = "voila une phrase";
// 	char	s4[] = "ENCORE une phrase !";
// 	char	s5[] = "";

// 	printf("%d -> %s & %s\n", ft_strequ(s1, s1), s1, s1);
// 	printf("%d -> %s & %s\n", ft_strequ(s1, s2), s1, s2);
// 	printf("%d -> %s & %s\n", ft_strequ(s1, s3), s1, s3);
// 	printf("%d -> %s & %s\n", ft_strequ(s1, s4), s1, s4);
// 	printf("%d -> %s & %s\n", ft_strequ(s1, s5), s1, s5);
// 	printf("%d -> %s & %s\n", ft_strequ(s5, s5), s5, s5);
// }
