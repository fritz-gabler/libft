/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:46:13 by fgabler           #+#    #+#             */
/*   Updated: 2023/03/26 00:10:00 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*tmp;
	size_t	i;

	i = 0;
	tmp = malloc(size * nitems);
	if (!tmp)
		return (NULL);
	while (size--)
	{
		ft_bzero(tmp, size * nitems);
		i++;
	}
	return (tmp);
}
