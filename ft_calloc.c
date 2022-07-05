/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akane <akane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:42:27 by akane             #+#    #+#             */
/*   Updated: 2022/07/04 18:09:42 by akane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*m;

	if ((int)count < 0 || (int)size < 0)
		return ((void *)0);
	m = malloc(sizeof (size_t) * count + 1);
	if (!m)
	{
		free(m);
		return (0);
	}
	ft_bzero(m, size * count + 1);
	return (m);
}
