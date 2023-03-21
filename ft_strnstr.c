/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:23:41 by fgabler           #+#    #+#             */
/*   Updated: 2023/03/21 11:30:55 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>



char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if(little[i] == '\0')
	{
		return ((char *) big);
	}
	while (len-- && big[i])
	{
		while (little[j] == big[i])
		{
			j++;
			i++;
			if (little[j] == '\0')
			{
				return ((char *) &big[i - j]);
			}
		}
		i++;
		j = 0;
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
