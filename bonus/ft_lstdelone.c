/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:03:34 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 16:40:01 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

// static void	test_del(void *elem)
// {
// 	elem = 0;
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && (*del))
	{
		(*del)(lst->content);
		free(lst);
	}
}

// #include <stdio.h>

// int	main(void)
// {
	// t_list	*elem;

	// elem = (void *) malloc(sizeof(t_list));
	// if (!elem)
	// 	return (0);
	// elem->content = "Je suis le contenu de l'element.";
	// elem->next = 0;
	// printf("Avant : %s a l'adresse ", (unsigned char *) elem->content);
	// printf("%p\n", elem);
	// ft_lstdelone(elem, &test_del);
	// // printf("Apres : %s a l'adresse ", (unsigned char *) elem->content);
	// printf("%p\n", elem);
// }
