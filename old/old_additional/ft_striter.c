/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:22:46 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 15:26:06 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../old_includes/libft.h"

// static void	test_toupper(char *c)
// {
// 	if (*c >= 'a' && 'z' >= *c)
// 		*c = *c - 'a' + 'A';
// }

void	ft_striter(char *s, void (*f)(char *))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		(*f)(s + i);
		i++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "Ceci est une phrase.";

// 	printf("Avant : %s\n", str);
// 	ft_striter(str, &test_toupper);
// 	printf("Apres : %s\n", str);
// }
