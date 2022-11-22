/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejankovs <ejankovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:16:24 by ejankovs          #+#    #+#             */
/*   Updated: 2022/11/19 16:37:11 by ejankovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*src;

	if (!s)
		return (0);
	src = (unsigned char *)s;
	while (*src)
	{
		if (*src == (unsigned char)c)
			return ((char *)src);
		src++;
	}
	if (*src == (unsigned char)c)
		return ((char *)src);
	return (0);
}
