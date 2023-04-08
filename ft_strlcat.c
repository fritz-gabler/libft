/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fritzgabler <fritzgabler@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:54:19 by fgabler           #+#    #+#             */
/*   Updated: 2023/04/07 20:35:07 by fritzgabler      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;
	size_t	count;

	i = 0;
	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	count = dstsize - dst_len - 1;
	if (!dst && dstsize == 0)
		return (0);
	if (dst_len > dstsize)
		return (src_len + dstsize);
	if (count > 0 && src[i] != '\0')
	{
		while (count--)
		{
			dst[dst_len + i] = src[j];
			i++;
			j++;
		}
	}
	return (dst_len + src_len);
}

// #include <string.h>

// int	main(void)
// {
// 	char	dest[] = "r";

// 	printf("%zu", strlcat(dest, "lorem ipsum dolor sit amet", 15));
// 	write(1, "\n", 1);
// 	write(1, dest, 15);
// }
