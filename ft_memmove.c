/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:47:38 by fgabler           #+#    #+#             */
/*   Updated: 2023/03/14 21:18:14 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void *ft_memmove(void *s1, const void *s2, size_t n)
{
	int i;

	i = 0;

	if(s1 > s2)
	{
		i = n;
		while(i--)
		{
			((char*) s1)[i] = ((char *)s2)[i];
		}
		return(s1);
	}
	while(i < n)
	{
		((char*) s1)[i] = ((char *)s2)[i];
		i++;
	}
	return(s1);
}
