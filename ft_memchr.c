/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:35:51 by evallee-          #+#    #+#             */
/*   Updated: 2023/02/15 14:32:09 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*us;
	unsigned char	uc;

	if (!s)
		return (NULL);
	us = (unsigned char *)s;
	uc = (unsigned char)c;
	while (*us && n--)
	{
		if (*us == uc)
			return ((void *)us);
		us++;
	}
	if (uc == '\0')
		return ((void *)us);
	return (NULL);
}
