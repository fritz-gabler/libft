/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:54:26 by fgabler           #+#    #+#             */
/*   Updated: 2023/03/20 13:08:30 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;
	const char	*tmp1;
	const char	*tmp2;

	tmp1 = (const char *) s1;
	tmp2 = (const char *) s2;
	while (n--)
	{
		if (tmp1[i] != tmp2[i])
		{
			return ((int) (tmp1[i] - tmp2[i]));
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main ()
{
  char buffer1[] = "DWgaOtP12df0";
  char buffer2[] = "DWGAOTP12DF0";

  int n;

  n = ft_memcmp ( buffer1, buffer2, sizeof(buffer1) );

  if (n>0) printf ("'%s' is greater than '%s'.\n",buffer1,buffer2);
  else if (n<0) printf ("'%s' is less than '%s'.\n",buffer1,buffer2);
  else printf ("'%s' is the same as '%s'.\n",buffer1,buffer2);

  return 0;
}
