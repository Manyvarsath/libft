/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkamal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:53:10 by bkamal            #+#    #+#             */
/*   Updated: 2021/11/04 14:19:01 by bkamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(needle);
	if (needle[0] == 0)
		return ((char *)haystack);
	while (haystack[i] && i + j <= len)
	{
		if (haystack[i] == needle[0] && !ft_strncmp(haystack + i, needle, j))
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}

// if (!haystack)
// 	return (NULL);
// int	main()
// {
// 	char *s1 = "see FF your FF return FF now FF";
// 	char *s2 = "FF";
// 	size_t max = strlen(s1);
// 	char *i1 = strnstr(s1, s2, max);
// 	char *i2 = ft_strnstr(s1, s2, max);
// 	if (i1 == i2)
// 	{
// 		printf()
// 		exit(EXIT_SUCCESS);
// 	}
// 	printf("%s\n")
// 	exit(EXIT_FAILURE);
// }