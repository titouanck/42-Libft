/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 00:07:34 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/11 00:17:24 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n)
		i++;
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	char	*s3;
// 	char	*s4;
// 	char	*s5;
// 	char	*s6;

// 	s1 = "Bonjour";
// 	s2 = "bonjour";
// 	s3 = "Bonjjur";
// 	s4 = "Bonjour.";
// 	s5 = "";
// 	s6 = "oui";
// 	printf("%d : %d\n", strncmp(s1, s1, 2), ft_strncmp(s1, s1, 2));
// 	printf("%d : %d\n", strncmp(s1, s2, 3), ft_strncmp(s1, s2, 3));
// 	printf("%d : %d\n", strncmp(s1, s3, 4), ft_strncmp(s1, s3, 4));
// 	printf("%d : %d\n", strncmp(s1, s4, 7), ft_strncmp(s1, s4, 7));
// 	printf("%d : %d\n", strncmp(s1, s5, 10), ft_strncmp(s1, s5, 10));
// 	printf("%d : %d\n", strncmp(s1, s6, 0), ft_strncmp(s1, s6, 0));
// }
