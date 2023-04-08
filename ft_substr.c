/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 20:02:31 by fgabler           #+#    #+#             */
/*   Updated: 2023/04/08 17:30:23 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	size;

	i = 0;
	size = ft_strlen(s);
	if (!s)
		return (NULL);
	if (size < start)
		return (ft_strdup(""));
	if (size - start < len)
		len = size;
	sub = (char *) ft_calloc((len + 1), sizeof (char));
	if (!sub)
		return (NULL);
	while (len-- && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	return ((char *) sub);
}
