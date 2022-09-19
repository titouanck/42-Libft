/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:30:27 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 17:34:38 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
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
// 	// elem1.next = &elem2;
// 	// elem2.content = &n2;
// 	// elem2.next = &elem3;
// 	// elem3.content = &n3;
// 	// elem3.next = 0;
// 	printf("Nombre d'elemts : %d\n", ft_lstsize(&elem1));
// }
