/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:16:14 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/29 13:13:11 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

// static void	*plus_one(void *elem)
// {
// 	int	*new;

// 	new = malloc(sizeof(int));
// 	if (!new)
// 		return (NULL);
// 	*new = 1 + *(int *)elem;
// 	return (new);
// }

// static void	test_del(void *elem)
// {
// 	size_t	size;
// 	size_t	i;

// 	size = sizeof(*elem);
// 	i = 0;
// 	while (i < size)
// 	{
// 		*(unsigned char *)(elem + i) = 0;
// 		i++;
// 	}
// }

static t_list	*local_ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*current;

	if (!lst || !f || !del)
		return (NULL);
	start = local_ft_lstnew(f(lst->content));
	current = start;
	while (lst && lst->next)
	{
		if (!current)
			return (NULL);
		current->next = local_ft_lstnew(f(lst->next->content));
		current = current->next;
		lst = lst->next;
	}
	return (start);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	e1;
// 	t_list	e2;
// 	t_list	e3;
// 	t_list	*current;
// 	int		data1;
// 	int		data2;
// 	int		data3;

// 	data1 = 4;
// 	data2 = 8;
// 	data3 = 15;
// 	e1.content = &data1;
// 	e2.content = &data2;
// 	e3.content = &data3;
// 	e1.next = &e2;
// 	e2.next = &e3;
// 	e3.next = 0;
// 	t_list *new = ft_lstmap(&e1, &plus_one, &test_del);
// 	current = &e1;
// 	while (current)
// 	{
// 		printf("%d -> ", *(int *)current->content);
// 		current = current->next;
// 	}
// 	printf("\n");
// 	while (new)
// 	{
// 		printf("%d -> ", *(int *)new->content);
// 		new = new->next;
// 	}
// }
