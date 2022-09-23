/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:48:49 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 15:26:19 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../old_includes/libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;
	size_t	i;

	new = malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (i < size)
	{
		new[i] = '\0';
		i++;
	}
	return (new);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*new;
// 	size_t	i;

// 	new = ft_strnew((sizeof(char) * ft_strlen("Bonjour") + 1));
// 	if (!new)
// 		return (0);
// 	new[0] = 'B';
// 	new[1] = 'o';
// 	new[2] = 'n';
// 	new[3] = 'j';
// 	new[4] = 'o';
// 	new[5] = 'u';
// 	new[6] = 'r';
// 	new[7] = '\0';
// 	printf("%s\n", new);

// 	// gcc -fsanitize=address *.c ../libc/*.c
// }
