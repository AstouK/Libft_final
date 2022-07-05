/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akane <akane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:44:40 by akane             #+#    #+#             */
/*   Updated: 2022/07/05 19:32:24 by akane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	size_src;
	size_t	size_dst;

	i = 0;
	size_src = ft_strlen(src);
	size_dst = ft_strlen(dst);
	if (dstsize <= size_dst)
		return (size_src + dstsize);
	while (size_dst + i < dstsize - 1 && src[i])
	{
		dst[size_dst + i] = src[i];
		i++;
	}
	if (size_dst < dstsize)
		dst[size_dst + i] = '\0';
	return (size_dst + size_src);
}
