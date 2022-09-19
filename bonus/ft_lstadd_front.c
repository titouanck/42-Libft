/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:13:53 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/19 16:23:17 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (!alst || !(*alst) || !new)
		return ;
	new->next = *alst;
	*alst = new;
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
// 	while (*begin)
// 	{
// 		printf("%s\n", (char *)(*begin)->content);
// 		*begin = (*begin)->next;
// 	}
// }
