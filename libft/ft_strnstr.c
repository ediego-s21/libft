/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 17:06:47 by ediego            #+#    #+#             */
/*   Updated: 2019/09/11 18:34:07 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i1;
	size_t i2;

	i1 = 0;
	i2 = 0;
	if (needle[i2] == '\0')
		return (char *)(&haystack[i1]);
	while (haystack[i1])
	{
		if (needle[i2] == haystack[i1])
			if (ft_strncmp(&haystack[i1], &needle[i2], len) == 0)
				return (char *)(&haystack[i1]);
		i1++;
	}
	return (NULL);
}
