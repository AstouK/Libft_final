/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akane <akane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:44:17 by akane             #+#    #+#             */
/*   Updated: 2022/07/05 18:45:05 by akane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	string_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

int	char_count(char	const *s, char c, int i)
{
	int	count;

	count = 1;
	while (s)
	{
		if (s[i] != c)
			count++;
		else
			return (count);
		i++;
	}
	return (count);
}

char	**pop_string(char **str, char const *s, char c)
{
	int	i;
	int	j;
	int	w;

	i = 0;
	j = 0;
	w = 0;
	while (j < string_count(s, c))
	{
		str[j] = malloc(sizeof(char) * char_count(s, c, i) + 1);
		while (s[i] != c)
		{
			str[j][w] = s[i];
			w++;
			i++;
		}
		j++;
		w = 0;
		i++;
	}
	str[j] = (void *)0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	str = malloc(sizeof (char const *) * string_count(s, c) + 1);
	if (!str)
	{
		free(str);
		return (NULL);
	}
	str = pop_string(str, s, c);
	return (str);
}
