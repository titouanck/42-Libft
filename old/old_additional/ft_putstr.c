/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:06:06 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 15:25:54 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../old_includes/libft.h"

void	ft_putstr(char const *s)
{
	write(1, s, ft_strlen(s));
}

// int	main(void)
// {
// 	ft_putstr("Success\n");
// }
