/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:55:54 by fgabler           #+#    #+#             */
/*   Updated: 2023/03/16 14:09:36 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;

	i = 0;
	char *s = (char *) calloc(5, sizeof (int) * 2);
	for(int i = 0; i < 6; i++)
	{
		s[i] = 's';
	}
	while(s[i])
	{
		i++;
		printf("%c", *s);
	}
	for(int i = 0; i < 6; i++)
	{

	}
	printf("\n");
	free(s);
	return(0);
}
