/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:07:16 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/12 12:10:38 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

// static char	test_toupper4(unsigned int index, char c)
// {
// 	if (c >= 'a' && 'z' >= c && index % 2)
// 		return (c - 'a' + 'A');
// 	return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*new;

	new = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = (*f)(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "Encore une phrase.";
// 	char	*new;

// 	printf("Avant : %s\n", str);
// 	new = ft_strmapi(str, &test_toupper4);
// 	printf("Apres : %s\n", str);
// 	printf("Nouvelle chaine : %s\n", new);
// }