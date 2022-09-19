/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:21:49 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/19 16:29:29 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	t_list	*new1;
// 	t_list	*new2;
// 	t_list	**begin;

// 	s1 = "Titouan";
// 	s2 = "Bonjour";
// 	new1 = ft_lstnew(s1);
// 	new2 = ft_lstnew(s2);
// 	begin = &new1;
// 	ft_lstadd_front(begin, new2);
// 	printf("Size : %d\n", ft_lstsize(*begin));
// 	while (*begin)
// 	{
// 		printf("%s\n", (char *)(*begin)->content);
// 		*begin = (*begin)->next;
// 	}
// }
