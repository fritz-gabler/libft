/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:23:41 by fgabler           #+#    #+#             */
/*   Updated: 2023/04/06 19:59:41 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
	{
		return ((char *) big);
	}
	while (len-- && big[i])
	{
		while (big[i] == little[j])
		{
			j++;
			i++;
			if (little[j] == '\0')
			{
				return ((char *) &big[i - j]);
			}
		}
		i++;
		j = 0;
	}
	return (0);
}
