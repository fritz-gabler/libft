/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:42:56 by fgabler           #+#    #+#             */
/*   Updated: 2023/03/22 15:05:04 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	res;

	i = 0;
	res = 0;
	neg = 1;
	if (ft_isalpha(*str))
	{
		return (0);
	}
	if (str[0] == '-')
	{
		neg = -1;
		i++;
	}
	while (str[i])
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res * neg);
}
