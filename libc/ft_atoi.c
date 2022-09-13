/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 00:44:51 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 15:02:08 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_atoi(const char *str)
{
	int		nbr;
	int		sign;
	size_t	i;

	nbr = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || ('\t' <= str[i] && str[i] <= '\r'))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	return (nbr * sign);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*n1;
// 	char	*n2;
// 	char	*n3;
// 	char	*n4;
// 	char	*n5;
// 	char	*n6;

// 	n1 = "\t\t\t+1837";
// 	n2 = "-1837";
// 	n3 = "0";
// 	n4 = "2147483648";
// 	n5 = "-2147483648";
// 	n6 = "2147483647";
// 	printf("%d : %d\n", atoi(n1), ft_atoi(n1));
// 	printf("%d : %d\n", atoi(n2), ft_atoi(n2));
// 	printf("%d : %d\n", atoi(n3), ft_atoi(n3));
// 	printf("%d : %d\n", atoi(n4), ft_atoi(n4));
// 	printf("%d : %d\n", atoi(n5), ft_atoi(n5));
// 	printf("%d : %d\n", atoi(n6), ft_atoi(n6));
// }
