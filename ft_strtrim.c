/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akane <akane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:45:14 by akane             #+#    #+#             */
/*   Updated: 2022/07/04 19:57:10 by akane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isinset(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (0);
		i++;
	}
	return (1);
}

static int	debut(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (isinset(s1[i], set) == 0)
		i++;
	return (i);
}

static int	fin(char const *s1, char const *set)
{
	int	i;

	i = (int)ft_strlen(s1) - 1;
	while (isinset(s1[i], set) == 0)
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = debut(s1, set);
	j = fin(s1, set);
	k = 0;
	if (i > j)
		return (ft_strdup(""));
	str = malloc(sizeof(char) * (j - i + 2));
	if (!str)
		return (NULL);
	while (i <= j)
	{
		str[k] = s1[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}
