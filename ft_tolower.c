/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:26:51 by fgabler           #+#    #+#             */
/*   Updated: 2023/03/17 15:50:01 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
int ft_tolower(int argument)
{
	if(argument > 64 && argument < 91)
	{
		argument += 32;
	}

	return (argument);
}

int main()
{
	int h = 'H';
	printf("%c", ft_tolower('Z'));
}
