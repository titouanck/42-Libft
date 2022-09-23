/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:55:03 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 15:26:12 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../old_includes/libft.h"

// static char	test_toupper3(char c)
// {
// 	if (c >= 'a' && 'z' >= c)
// 		return (c - 'a' + 'A');
// 	return (c);
// }

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*new;

	new = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = (*f)(s[i]);
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
// 	new = ft_strmap(str, &test_toupper3);
// 	printf("Apres : %s\n", str);
// 	printf("Nouvelle chaine : %s\n", new);
// }
