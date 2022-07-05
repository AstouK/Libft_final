/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akane <akane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:38:26 by akane             #+#    #+#             */
/*   Updated: 2022/07/04 17:38:50 by akane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nb_space(const char *str)
{
	int	n;

	n = 0;
	if ((str[n] >= 9 && str[n] <= 13) || str[n] == 32)
	{
		while ((str[n] >= 9 && str[n] <= 13) || str[n] == 32)
		{
			n++;
		}
		return (n);
	}
	else
		return (n);
}

int	ft_atoi(const char	*str)
{
	int	i;
	int	sign;
	int	x;

	i = nb_space(str);
	sign = 1;
	x = 0;
	if (str[i])
	{
		if (str[i] == '-')
		{
			sign = sign * (-1);
			i++;
		}
		if (str[i] == '+')
			i++;
		while (ft_isdigit(str[i]))
		{
			x = x * 10;
			x = x + (str[i] - '0');
			i++;
		}
	}
	return (sign * x);
}
