/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:30:41 by fgabler           #+#    #+#             */
/*   Updated: 2023/04/03 12:45:23 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen(s);
	i = 0;
	if (!s)
		return ;
	while (len--)
	{
		write (fd, &s[i], 1);
	}
	write (1, "\n", 1);
}
