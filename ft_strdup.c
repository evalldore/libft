/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:11:01 by evallee-          #+#    #+#             */
/*   Updated: 2023/02/14 19:54:09 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		dest[i] = src[i++];
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s1)
{	
	char	*ptr;
	size_t	len;

	len = ft_strlen(ptr);
	ptr = (char *)s1;
	return (ft_strlcpy(malloc(len), ptr, len));
}
