/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkamal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:08:19 by bkamal            #+#    #+#             */
/*   Updated: 2021/11/05 16:08:21 by bkamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*cal;
	size_t	i;

	i = 0;
	cal = (void *)malloc(size * count);
	if (!cal)
		return (NULL);
	ft_bzero(cal, size * count);
	return (cal);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	int size = 8539;
// 	void * d1 = ft_calloc(size, sizeof(int));
// 	void * d2 = calloc(size, sizeof(int));
// 	if (memcmp(d1, d2, size * sizeof(int)))
// 	{
// 		printf("%d lol\n", memcmp(d1, d2, size * sizeof(int)));
// 		exit(EXIT_FAILURE);
// 	}
// 	printf("%d haha\n", memcmp(d1, d2, size * sizeof(int)));
// 	free(d1);
// 	free(d2);
// 	exit(EXIT_SUCCESS);
// }