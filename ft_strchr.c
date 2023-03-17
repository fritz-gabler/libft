/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:52:34 by fgabler           #+#    #+#             */
/*   Updated: 2023/03/17 16:05:23 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char *ft_strchr(const char *str, int c)
{
	int i;

	i = 0;
	while( str[i] != c)
	{
		if(str[i] != c)
		{
			return ((const char *)str[i]);
		}
		i++;
	}
	return (0);
}

int main()
{
	char *s = "hello";
	int c = 'o';

	printf("%s", ft_strchr(s, c));
	return (0);
}
