/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:37:18 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/12 18:38:53 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
	write(fd, "\n", 1);
}

// int	main(void)
// {
// 	int	fd;

// 	fd = open("test.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
// 	if (fd == -1)
// 		return (1);
// 	ft_putstr("...\n");
// 	ft_putendl_fd("Hello, world!", fd);
// }
