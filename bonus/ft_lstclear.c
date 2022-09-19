/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:59:36 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/19 17:47:32 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst || !(*lst) || !del)
		return ;
	if ((*lst)->next)
		ft_lstclear((&(*lst)->next), del);
	del((*lst)->content);
	free(*lst);
	*lst = NULL;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*elem;
// 	t_list	*elem2;
// 	int		data;
// 	int		data2;

// 	data = 42;
// 	data2 = 21;
// 	elem = malloc(sizeof(t_list));
// 	elem2 = malloc(sizeof(t_list));
// 	if (!elem || !elem2)
// 		return (1);
// 	elem->content = &data;
// 	elem2->content = &data2;
// 	elem->next = elem2;
// 	elem2->next = 0;
// 	printf("(before) %d\n", *(int *)elem->content);
// 	printf("(before) %d\n", *(int *)elem2->content);
// 	ft_lstclear(&elem, &test_del);
// 	printf("elem = %p\n", elem);
// 	printf("Let's try to free elem & elem2 !\n");
// 	free(elem);
// 	free(elem2);
// }