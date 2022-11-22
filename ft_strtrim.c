/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejankovs <ejankovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:17:54 by ejankovs          #+#    #+#             */
/*   Updated: 2022/11/19 16:53:48 by ejankovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i;

	if (!s1)
		return (NULL);
	while (set && *s1 != '\0' && ft_strchr(set, *s1))
		++s1;
	i = ft_strlen(s1);
	while (set && i > 0 && ft_strchr(set, s1[i - 1]))
		--i;
	res = (char *)malloc((i + 1) * sizeof(char));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, i + 1);
	return (res);
}
