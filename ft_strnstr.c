/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fritzgabler <fritzgabler@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:23:41 by fgabler           #+#    #+#             */
/*   Updated: 2023/04/10 13:25:15 by fritzgabler      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t count;

	i = 0;
	j = 0;
	count = 0;
	if (little[i] == '\0')
		return ((char *) big);
	while (len-- && big[i])
	{
		while (big[i] == little[j])
		{
			j++;
			i++;
			if (count == len)
				return (0);f
			if (little[j] == '\0')
				return ((char *) &big[i - j]);
			len--;
		}
		i++;
		j = 0;
	}
	return (0);
}
