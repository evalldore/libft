/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:57:39 by evallee-          #+#    #+#             */
/*   Updated: 2023/02/02 16:57:39 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	numwords(char const *s, char c)
{
	size_t	num;

	num = 0;
	while (*s)
	{
		if (*s != c)
		{
			while (*s && *s != c)
				s++;
			num++;
			continue ;
		}
		s++;
	}
	return (num);
}

static char	**appendword(char **arr, const char **s, char c)
{
	*arr++ = ft_substr(*s, 0, ft_strchr(*s, c) - *s);
	*s = ft_strchr(*s, c);
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	**ptr;

	arr = malloc((numwords(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	ptr = arr;
	while (*s)
	{
		while (*s && (*s != c))
		{
			if (ft_strchr(s, c))
			{
				arr = appendword(arr, &s, c);
				continue ;
			}
			arr = appendword(arr, &s, '\0');
		}
		if (*s)
			s++;
	}
	arr = NULL;
	return (ptr);
}
