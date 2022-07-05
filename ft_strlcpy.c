/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akane <akane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:44:45 by akane             #+#    #+#             */
/*   Updated: 2022/07/05 19:19:10 by akane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;

	i = 0;
	len_src = ft_strlen(src);
	if (!src || !dst)
		return (0);
	if (dstsize == 0)
		return (len_src);
	while (i < dstsize - 1 && src[i])
	{
		dst [i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}
