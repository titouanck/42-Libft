/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:55:52 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 15:26:00 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../old_includes/libft.h"

void	ft_strdel(char **as)
{
	if (as && *as)
		free(*as);
	*as = NULL;
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;

// 	str = ft_memalloc(9);
// 	ft_strdel(&str);
// }
