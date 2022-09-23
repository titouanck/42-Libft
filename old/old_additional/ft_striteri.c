/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:52:07 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 15:26:09 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../old_includes/libft.h"

// static void	test_toupper2(unsigned int index, char *c)
// {
// 	if (*c >= 'a' && 'z' >= *c && index % 2)
// 		*c = *c - 'a' + 'A';
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, s + i);
		i++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "Ceci est une phrase.";

// 	printf("Avant : %s\n", str);
// 	ft_striteri(str, &test_toupper2);
// 	printf("Apres : %s\n", str);
// }
