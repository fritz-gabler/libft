/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:42:30 by fgabler           #+#    #+#             */
/*   Updated: 2023/03/16 19:20:03 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


int ft_toupper(int ch)
{
	if(ch > 96 && ch < 123)
	{
		ch -= 32;
	}

	return (ch);
}

int main()
{
	int h = 'h';
	printf("%c", ft_toupper(h));



}
