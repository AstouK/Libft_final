/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akane <akane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:43:17 by akane             #+#    #+#             */
/*   Updated: 2022/07/04 19:57:44 by akane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	powerof10(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		nb = nb * (-1);
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*neg(char *str, int n, int len)
{
	str[len] = '\0';
	len ++;
	str[0] = '-';
	n = n * (-1);
	while (len > 1)
	{
		len--;
		str[len] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

char	*pos(char *str, int n, int len)
{
	str[len] = '\0';
	while (len > 0)
	{
		len--;
		str[len] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = powerof10(n);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
	{
		free(str);
		return (NULL);
	}
	if (n < 0)
		str = neg(str, n, len);
	else
		str = pos(str, n, len);
	return (str);
}
