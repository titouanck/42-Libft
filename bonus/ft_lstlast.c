/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:27:04 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/19 16:44:57 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	t_list	*new1;
// 	t_list	*new2;
// 	t_list	**begin;
// 	t_list	*current;

// 	s1 = "Titouan";
// 	s2 = "Bonjour";
// 	new1 = ft_lstnew(s1);
// 	new2 = ft_lstnew(s2);
// 	begin = &new1;
// 	ft_lstadd_front(begin, new2);
// 	current = *begin;
// 	while (current)
// 	{
// 		printf("%s\n", (char *)current->content);
// 		current = current->next;
// 	}
// 	printf("\n%s\n", (char *)(ft_lstlast(*begin))->content);
// 	ft_lstlast(NULL);
// }
