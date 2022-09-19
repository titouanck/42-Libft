/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:45:15 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/19 16:59:21 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static t_list	*local_ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (!alst || !(*alst) || !new)
		return ;
	(local_ft_lstlast(*alst))->next = new;
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
// 	ft_lstadd_back(begin, new2);
// 	while (*begin)
// 	{
// 		printf("%s\n", (char *)(*begin)->content);
// 		*begin = (*begin)->next;
// 	}
// }
