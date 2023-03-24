/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:03:43 by fgabler           #+#    #+#             */
/*   Updated: 2023/03/24 17:46:19 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	i = ft_strlen(str) - 1;
	while (str[i--])
	{
		if (str[i] == c)
		{
			return ((char *) str + i);
		}
	}
	return (0);
}
