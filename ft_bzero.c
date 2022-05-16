/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkamal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:43:52 by bkamal            #+#    #+#             */
/*   Updated: 2021/11/06 14:05:44 by bkamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*v_char;

	i = 0;
	v_char = (unsigned char *) s;
	while (i < n)
		v_char[i++] = 0;
}

// #include <strings.h>
// #include <stdio.h>
// int main()
// {
// 	char str[25] = "Servants to Madness";
// 	ft_bzero(str + 2, (0));
// 	printf("%s\n", str);
// 	return 0;
// }