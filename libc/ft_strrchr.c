/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:25:56 by tchevrie          #+#    #+#             */
/*   Updated: 2022/10/04 13:14:00 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char) c)
			break ;
		i--;
	}
	if (s[i] == (char) c)
		return ((char *) s + i);
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {

// 	char s[] = "tripouille";
// 	char s2[] = "ltripouiel";
// 	char s3[] = "";
	
// 	printf("1 %s : %s\n", strrchr(s, 't'), ft_strrchr(s, 't'));
// 	printf("2 %s : %s\n", strrchr(s, 'l'), ft_strrchr(s, 'l'));
// 	printf("3 %s : %s\n", strrchr(s2, 'l'), ft_strrchr(s2, 'l'));
// 	printf("4 %s : %s\n", strrchr(s, 'z'), ft_strrchr(s, 'z'));
// 	printf("5 %p : %p\n", strrchr(s, 0), ft_strrchr(s, 0));
// 	printf("6 %s : %s\n", strrchr(s, 't' + 256), ft_strrchr(s, 't' + 256));
// 	// printf("7 %s : %s\n", strchr(NULL, 'b'), ft_strchr(NULL, 'b'));
// 	printf("8 %s : %s\n", strrchr(s3, 0), ft_strrchr(s3, 0));
// // 	printf("%p\n", ft_strrchr("bonjour toi !", '!'));
// // 	printf("%p", strrchr("bonjour toi !", '!'));
// }
