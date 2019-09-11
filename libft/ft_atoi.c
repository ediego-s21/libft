/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 19:01:49 by ediego            #+#    #+#             */
/*   Updated: 2019/09/07 19:16:20 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	znak;

	znak = 1;
	res = 0;
	i = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
		i++;
	if (str[i] == '-')
		znak = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] >= 48 && str[i] <= 57) && str[i] != '\0')
	{
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	if (znak == -1)
		return (res * znak);
	return (res);
}
