/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:45:14 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/09 15:22:51 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = 0;
		i++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	nb;

// 	nb = 0;
// 	char	tab[] = "Voici";

// 	ft_bzero(tab, nb);
// 	printf("%c", tab[0]);
// 	printf("%c", tab[1]);
// 	printf("%c", tab[2]);
// 	printf("%c", tab[3]);
// 	printf("%c : ", tab[4]);

// 	char	tab2[] = "Voici";

// 	bzero(tab2, nb);
// 	printf("%c", tab2[0]);
// 	printf("%c", tab2[1]);
// 	printf("%c", tab2[2]);
// 	printf("%c", tab2[3]);
// 	printf("%c", tab2[4]);
// }