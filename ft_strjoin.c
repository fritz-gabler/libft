/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:03:45 by fgabler           #+#    #+#             */
/*   Updated: 2023/04/11 18:04:40 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*new;
	unsigned int	len;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	new = ft_calloc(len + 1, sizeof (int));
	if (!new)
		return (0);
	if (s1[i] == '\0' && s2[j] == '\0')
		return (ft_strdup(""));
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new[i] = s2[j];
		j++;
		i++;
	}
	return (new);
}
