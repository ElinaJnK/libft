/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejankovs <ejankovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:13:30 by ejankovs          #+#    #+#             */
/*   Updated: 2022/11/19 14:13:35 by ejankovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*t;
	size_t	s;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	if (nmemb == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	s = size * nmemb;
	t = (void *)malloc(s);
	if (!t)
		return (NULL);
	ft_bzero(t, s);
	return (t);
}
