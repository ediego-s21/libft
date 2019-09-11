/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 15:04:00 by ediego            #+#    #+#             */
/*   Updated: 2019/09/09 21:30:29 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	unsigned int i1;
	unsigned int i2;

	i1 = 0;
	i2 = 0;
	while (s1[i1])
		i1++;
	while (s2[i2])
	{
		s1[i1] = s2[i2];
		i2++;
		i1++;
	}
	s1[i1] = '\0';
	return (s1);
}
