/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:23:06 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 16:51:03 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../old_includes/libft.h"

static size_t	count_ws(char const *s)
{
	size_t	len;
	size_t	i;
	size_t	whitespaces;

	len = ft_strlen(s) - 1;
	whitespaces = 0;
	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		whitespaces++;
		i++;
	}
	if (s[i] == '\0')
		return (0);
	i = 0;
	while (s[len - i] == ' ' || s[len - i] == '\t' || s[len - i] == '\n')
	{
		whitespaces++;
		i++;
	}
	return (whitespaces);
}

char	*ft_strtrim(char const *s)
{
	char	*new;
	size_t	space;
	size_t	i;

	space = ft_strlen(s) - count_ws(s);
	new = malloc(sizeof(char) * (space + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	s = s + i;
	i = 0;
	while (i < space)
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;

// 	str = " \n \t  Hello, \tworld!  \t\t  \n\n  ";
// 	printf("1: %s\n", str);
// 	printf("2: %s\n", ft_strtrim(str));
// }
