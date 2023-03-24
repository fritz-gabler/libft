/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:54:19 by fgabler           #+#    #+#             */
/*   Updated: 2023/03/22 17:07:31 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	count;

	i = 0;
	j = 0;
	len = ft_strlen(dst);
	count = dstsize - len;
	if (count > 0)
	{
		while (count-- -1)
		{
			dst[len + i] = src[j];
			i++;
			j++;
		}
	}
	return (len + ft_strlen((char *)src));
}
