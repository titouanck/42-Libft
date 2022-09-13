/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:23:06 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 17:19:30 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char	*find_begin(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	int		in_set;

	in_set = 0;
	i = 0;
	j = 0;
	while (s1[i])
	{
		in_set = 0;
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				in_set = 1;
			j++;
		}
		if (!in_set)
			break ;
		i++;
	}
	return ((char *) s1 + i);
}

static char	*find_end(char const *s1, char const *set, char const *begin)
{
	size_t	i;
	size_t	j;
	int		in_set;

	in_set = 0;
	i = ft_strlen(s1) - 1;
	j = 0;
	while (s1 + i != begin)
	{
		in_set = 0;
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				in_set = 1;
			j++;
		}
		if (!in_set)
			break ;
		i--;
	}
	return ((char *) s1 + i);
}

static char	*fill_str(char const *begin, char const *end)
{
	char	*new;
	size_t	i;

	new = malloc(sizeof(char) * (end - begin + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (begin + i < end)
	{
		new[i] = begin[i];
		i++;
	}
	return (new);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*begin;
	char	*end;
	char	*new;

	begin = find_begin(s1, set);
	end = find_end(s1, set, begin);
	if (begin == end)
	{
		new = malloc(sizeof(char) * 1);
		new[0] = '\0';
	}
	else
		new = fill_str(begin, end);
	if (!new)
		return (NULL);
	return (new);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;

// 	str = "";
// 	printf("1: %s\n", str);
// 	printf("2: %s\n", ft_strtrim(str, "wefgrhetnr"));
// }
