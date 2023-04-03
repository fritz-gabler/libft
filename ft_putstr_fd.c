/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:41:57 by fgabler           #+#    #+#             */
/*   Updated: 2023/04/03 12:50:52 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
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
}
