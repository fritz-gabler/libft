/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:58:30 by fgabler           #+#    #+#             */
/*   Updated: 2023/03/20 12:10:15 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;

	i = 0;

	while( i < n && str1[i] != '\0' && str2[i] != '\0')
	{
		if(str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return(0);
}


int main ()
{
   char str1[15] = "abcdef";
   char str2[15] = "ABCDEF";
   int ret;

   ret = ft_strncmp(str1, str2, 4);

   if(ret < 0) {
      printf("str1 is less than str2\n");
   } else if(ret > 0) {
      printf("str2 is less than str1\n");
   } else {
      printf("str1 is equal to str2");
   }

   return(0);
}
