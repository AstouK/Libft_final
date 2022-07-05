/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akane <akane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:44:26 by akane             #+#    #+#             */
/*   Updated: 2022/07/04 17:57:36 by akane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*c;

	c = malloc(sizeof (char) * (ft_strlen(src) + 1));
	if (!c)
	{
		free(c);
		return (0);
	}
	ft_memcpy(c, src, ft_strlen(src) + 1);
	return (c);
}
