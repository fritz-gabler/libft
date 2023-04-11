/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:03:45 by fgabler           #+#    #+#             */
/*   Updated: 2023/04/11 20:11:44 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*new;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	new = (char *)ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!new)
		return (NULL);
	if (s1[i] == '\0' && s2[j] == '\0')
		return (ft_strdup(""));
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
		new[i++] = s2[j++];
	new = 
	return (new);
}
