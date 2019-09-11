/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 18:49:41 by ediego            #+#    #+#             */
/*   Updated: 2019/09/09 23:18:04 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char *ssrc;
	unsigned char *ddst;
	unsigned i;

	i = 0;
	ddst = (unsigned char *)dst;
	ssrc = (const unsigned char *)src;
	while (i < len)
	{
		ddst[i] = ssrc[i];
		i++;
	}
	return(ddst);
}
