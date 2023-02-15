/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:31:06 by evallee-          #+#    #+#             */
/*   Updated: 2023/02/15 14:26:47 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*l;

	if (!s)
		return (NULL);
	l = NULL;
	while (*s)
	{
		if (*s == (char)c)
			l = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (l);
}
