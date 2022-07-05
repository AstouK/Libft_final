/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akane <akane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:45:04 by akane             #+#    #+#             */
/*   Updated: 2022/07/04 18:05:14 by akane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)haystack;
	if (needle == NULL)
		return ((char *) haystack);
	while (haystack[i] && needle[j] && i < len)
	{
		printf("i: %zu\n", i);
		if (len - i < ft_strlen(needle) - 1)
			return (NULL);
		while (haystack[i] == needle[j] && i < len)
		{
			j++;
			i++;
			printf("j: %zu\n", j);
		}
		if (j == ft_strlen(needle))
			return (&str[i - j]);
		i++;
	}
	return (NULL);
}
