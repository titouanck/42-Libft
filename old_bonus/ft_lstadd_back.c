/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:41:07 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 17:56:30 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*current;

	current = (*alst);
	while (current->next)
		current = current->next;
	current->next = new;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*begin;
// 	t_list	elem1;
// 	t_list	elem2;
// 	t_list	elem3;
// 	t_list	elem4;

// 	int	n1 = 4;
// 	int	n2 = 8;
// 	int	n3 = 15;
// 	int	n4 = 16;
// 	elem1.content = &n1;
// 	elem1.next = &elem2;
// 	elem2.content = &n2;
// 	elem2.next = &elem3;
// 	elem3.content = &n3;
// 	elem3.next = 0;
// 	elem4.content = &n4;
// 	elem4.next = 0;
// 	begin = &elem1;
// 	while (begin && begin->content)
// 	{
// 		printf("%d -> ", *(int *) begin->content);
// 		begin = begin->next;
// 	}
// 	printf("\n");
// 	begin = &elem1;
// 	ft_lstadd_back(&begin, &elem4);
// 	while (begin && begin->content)
// 	{
// 		printf("%d -> ", *(int *) begin->content);
// 		begin = begin->next;
// 	}
// }
