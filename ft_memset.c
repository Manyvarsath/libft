/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkamal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:44:09 by bkamal            #+#    #+#             */
/*   Updated: 2021/11/02 21:32:51 by bkamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	car;
	unsigned char	*b0;

	b0 = b;
	if (len == 0)
		return (b);
	car = c;
	i = 0;
	while (i < len)
	{
		*b0 = c;
		b0++;
		i++;
	}
	return (b);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     // char str[50] = "Dumbasses are for donkeys";
//     // printf("\nBefore memset(): %s\n", str);
//    //printf("After memset():  %p\n", memset(NULL, 'A', (4)));
// 	printf("After memset():  %p\n", ft_memset(NULL, 'A', 4));
//    return 0;
// }