/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkamal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:47:39 by bkamal            #+#    #+#             */
/*   Updated: 2021/11/03 13:34:16 by bkamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	char str[] = "Chronicles of a dumbass";
// 	printf("%zu\n", strlen(str));
// 	printf("%zu\n", ft_strlen(str));
// 	return 0;
// }