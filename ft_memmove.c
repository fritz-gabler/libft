/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:47:38 by fgabler           #+#    #+#             */
/*   Updated: 2023/03/21 14:45:53 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*tep;

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
#include <stdio.h>
#include <string.h>

int main () {
   char dest[] = "hello";
   const char *src;

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 4);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}


