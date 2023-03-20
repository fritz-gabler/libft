/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:23:41 by fgabler           #+#    #+#             */
/*   Updated: 2023/03/20 13:57:42 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	char *tmp1;
	char *tmp2;

	tmp1 = (char *) big;
	tmp2 = (char *) little;
	i = 0;
	if (little == (void *) '\0')
	{
		return (tmp1);
	}
	while (len--)
	{
		if (big[i] == little[i])
		{
			return (&tmp1[i]);
		}
		i++;
	}
	return (0);
}

int main()
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char	*ptr;

	ptr = ft_strnstr(largestring, smallstring, 7);
	printf("%s", ptr);
}
