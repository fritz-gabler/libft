/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 20:02:31 by fgabler           #+#    #+#             */
/*   Updated: 2023/03/22 13:11:40 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	i = 0;
	sub = (char *) ft_calloc((len + 1), sizeof (char));
	if (!sub)
		return (NULL);
	while (len-- && s[start])
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	return ((char *) sub);
}
