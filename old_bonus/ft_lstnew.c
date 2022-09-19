/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:32:13 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 13:53:52 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (void *) malloc(sizeof(content));
	if (!new)
		return (NULL);
	new->content = (void *) content;
	new->next = NULL;
	return (new);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*r;
// 	char	*test;
// 	int		nb;

// 	test = "Bonjour";
// 	r = ft_lstnew((test));
// 	printf("%s | %p\n", (char *) r->content, r->next);
// 	free(r);
// 	nb = 42;
// 	r = ft_lstnew(&nb);
// 	printf("%d | %p\n", *(int *) r->content, r->next);
// }
