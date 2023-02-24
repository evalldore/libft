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

static	void	*ft_clearshit(char	**start, char	**end)
{
	unsigned int	i;

	i = (end - start);
	while (i)
		free(start[i--]);
	free(start);
	return (NULL);
}

char	**ft_allocate(unsigned int num, char ***start, char ***end)
{
	*start = malloc(num * sizeof(char *));
	*end = *start;
	return (*start);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr[2];

	if (!ft_allocate(numwords(s, c) + 1, &ptr[1], &ptr[0]))
		return (NULL);
	while (*s)
	{
		while (*s && (*s != c))
		{
			if (ft_strchr(s, c))
			{
				ptr[0] = appendword(ptr[0], &s, c);
				if (!(ptr[0] - 1))
					return (ft_clearshit(ptr[1], ptr[0]));
				continue ;
			}
			ptr[0] = appendword(ptr[0], &s, '\0');
			if (!(ptr[0] - 1))
				return (ft_clearshit(ptr[1], ptr[0]));
		}
		if (*s)
			s++;
	}
	*ptr[0] = NULL;
	return (ptr[1]);
}
