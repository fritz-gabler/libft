/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:23:41 by fgabler           #+#    #+#             */
/*   Updated: 2023/03/20 17:40:48 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t ft_strlen(const char *str);

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (len--)
	{
		if (big[i] == little[j])
		{
			while (little[i + j])
			{
				if (little[j])
				{
					return ((char *) &big[i]);
				}
				j++;
			}

		}
		j = 0;
		i++;
	}

	return (0);
}

int main()
{
	const char *largestring = "Foo B Bar Baz";
	const char *smallstring = "Bar";
	char	*ptr1;
	char	*ptr2;

	ptr1 = strnstr(largestring, smallstring, 9);
	ptr2 = ft_strnstr(largestring, smallstring, 9);
	printf("Orginal : %s\n", ptr1);
	printf("Fake : %s\n", ptr2);
}
