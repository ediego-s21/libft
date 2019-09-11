/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 14:12:41 by ediego            #+#    #+#             */
/*   Updated: 2019/09/11 12:54:24 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t len_d;
	size_t len_s;
	size_t i;

	len_d = (size_t)ft_strlen(dst);
	len_s = (size_t)ft_strlen(src);
	i = 0;
	if (size >= (len_d + 2))
	{
		while (((len_d + i) < size) && (src[i] != '\0'))
		{
			dst[len_d + i] = src[i];
			i++;
		}
		dst[len_d + i] = '\0';
		return (len_d + len_s);
	}
	return (len_s + size);
}
