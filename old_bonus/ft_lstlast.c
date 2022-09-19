/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:35:43 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 17:40:03 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	current = lst;
	while (current && current->next)
		current = current->next;
	return (current);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	elem1;
// 	t_list	elem2;
// 	t_list	elem3;

// 	int	n1 = 4;
// 	int	n2 = 8;
// 	int	n3 = 15;
// 	elem1.content = &n1;
// 	elem1.next = &elem2;
// 	elem2.content = &n2;
// 	elem2.next = &elem3;
// 	elem3.content = &n3;
// 	elem3.next = 0;
// 	printf("Dernier element : %d\n", *(int *) ft_lstlast(&elem1)->content);
// }
