/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:12:58 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 15:26:14 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../old_includes/libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;
	int		r;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n)
		i++;
	r = s1[i] - s2[i];
	if (r == 0 || n == 0)
		return (1);
	return (0);
}

// #include <stdio.h>

// static void tp(char *s1, char *s2, size_t size)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s1[i] && i < size)
// 	{
// 		printf("%c", s1[i]);
// 		i++;
// 	}
// 	printf(" & ");
// 	i = 0;
// 	while (s2[i] && i < size)
// 	{
// 		printf("%c", s2[i]);
// 		i++;
// 	}
// 	printf("\n");
// }

// int	main(void)
// {
// 	char	s1[] = "Voila une phrase.";
// 	char	s2[] = "voila une phrase.";
// 	char	s3[] = "voila une phrase";
// 	char	s4[] = "ENCORE une phrase !";
// 	char	s5[] = "";

// 	printf("%d -> ", ft_strnequ(s1, s1, 1));
// 	tp(s1, s1, 1);
// 	printf("%d -> ", ft_strnequ(s1, s2, 1));
// 	tp(s1, s2, 1);
// 	printf("%d -> ", ft_strnequ(s1, s3, 2));
// 	tp(s1, s3, 2);
// 	printf("%d -> ", ft_strnequ(s1, s4, 6));
// 	tp(s1, s4, 6);
// 	printf("%d -> ", ft_strnequ(s1, s5, 4));
// 	tp(s1, s5, 4);
// 	printf("%d -> ", ft_strnequ(s5, s5, 1));
// 	tp(s5, s5, 1);
// }
