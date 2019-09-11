/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:07:56 by ediego            #+#    #+#             */
/*   Updated: 2019/09/11 11:04:19 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char *ssrc;
	unsigned char *ddst;
	unsigned int c;

	c = 0;
	ssrc = (const unsigned char *)src;
	ddst = (unsigned char *)dst;
	while (c < n)
	{
		ddst[c] = ssrc[c];
		c++;
	}
	return (dst);
}
