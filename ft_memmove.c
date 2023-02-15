/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:34:05 by evallee-          #+#    #+#             */
/*   Updated: 2023/02/15 14:43:03 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ud;
	unsigned const char	*us;
	unsigned char		buff[256];
	size_t				i;

	if (!dest || !src)
		return (NULL);
	ud = (unsigned char *)dest;
	us = (unsigned const char *)src;
	i = 0;
	while (i < n)
	{
		buff[i] = us[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		ud[i] = buff[i];
		i++;
	}
	return (dest);
}
