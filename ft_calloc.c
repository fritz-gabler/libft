/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:46:13 by fgabler           #+#    #+#             */
/*   Updated: 2023/04/08 23:13:49 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*tmp;
	// static int i = 1;

	// i--;
	// if (i < 0)
	// 	return NULL;
	// if (size && SIZE_MAX / size < nitems)
	// 	return (NULL);
	if (nitems * size / nitems != size)
		return (NULL);
	tmp = malloc(size * nitems);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, size * nitems);
	return (tmp);
}
