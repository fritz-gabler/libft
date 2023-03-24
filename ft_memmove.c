/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:47:38 by fgabler           #+#    #+#             */
/*   Updated: 2023/03/22 16:15:59 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*tep;

	i = 0;
	tep = (char *) dst;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		i = len;
		while (i--)
		{
			((char *) dst)[i] = ((char *)src)[i];
		}
		return (dst);
	}
	while (i < len)
	{
		((char *) dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
