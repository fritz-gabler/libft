/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:03:43 by fgabler           #+#    #+#             */
/*   Updated: 2023/03/20 11:48:59 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
size_t	ft_strlen(const char *str);

char *ft_strrchr(const char *str, int c)
{
	int	i;
	int	b;
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
