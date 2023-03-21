/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 20:02:31 by fgabler           #+#    #+#             */
/*   Updated: 2023/03/21 20:14:19 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char const	*sub;
	unsigned int i;

	i = 0;
	sub = (char *) ft_calloc(len + 1, (char));
	if(!sub)
		return (0);
	while (len--)
	{
		sub[i] = s[start];
		start ++;
	}
	return (sub);
}
