/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkamal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:58:03 by bkamal            #+#    #+#             */
/*   Updated: 2021/11/03 14:43:16 by bkamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	my_iskhawi(char c)
{
	if (c == '\t' || c == '\v' || c == '\f' || c == '\r'
		|| c == '\n' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int				sign;
	int				i;
	unsigned long	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (my_iskhawi(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (nb > 9223372036854775807 && sign == -1)
			return (0);
		if (nb >= 9223372036854775807 && sign == 1)
			return (-1);
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}

// #include <stdlib.h>
// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_atoi(" a9999999999999999999999999"));
// 	printf("%d\n", atoi("   a99999999999999999999999999"));
// 	return 0;
// }