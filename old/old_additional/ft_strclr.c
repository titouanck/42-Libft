/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:14:52 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 15:25:57 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../old_includes/libft.h"

void	ft_strclr(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		s[i] = '\0';
		i++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "Voici une phrase.";

// 	printf("Len : %lu\n", ft_strlen(str));
// 	printf("[%c][%c][%c][%c]\t[%c]\n", str[0], str[1], str[2], str[3], str[16]);
// 	ft_strclr(str);
// 	printf("[%c][%c][%c][%c]\t[%c]\n", str[0], str[1], str[2], str[3], str[16]);
// }
