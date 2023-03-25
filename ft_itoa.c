/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:55:48 by fgabler           #+#    #+#             */
/*   Updated: 2023/03/25 23:59:30 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	unsigned int	i;

	i = 0;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i - 1);
}

unsigned int	ft_pow(int y)
{
	unsigned int	pow;
	int				i;

	pow = 10;
	i = 0;
	while (i < y)
	{
		pow *= 10;
		i++;
	}
	return (pow);
}

void	ft_checknum(int num, char *str, unsigned int i)
{
	if (num < 0)
	{
		str[i] = '-';
		num *= -1;
		i++;
	}
	if (num > 9)
	{
		str[i] = num / ft_pow(ft_intlen(num)) + 48;
		num = num - (num / ft_pow(ft_intlen(num)) * ft_pow(ft_intlen(num)));
		i++;
		ft_checknum(num, str, i);
	}
	if (num < 9)
	{
		str[i] = num + '0';
	}
}

char	*ft_itoa(int n)
{
	char			*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		str = (char *) ft_calloc((ft_intlen(n) + 2), sizeof(char));
	else
		str = (char *) ft_calloc((ft_intlen(n) + 1), sizeof(char));
	ft_checknum(n, str, 0);
	return (str);
}
