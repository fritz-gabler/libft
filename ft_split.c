/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 13:54:00 by fgabler           #+#    #+#             */
/*   Updated: 2023/03/27 18:25:07 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			j++;
		i++;
	}
	return (j);
}
int	ft_locate(const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		if (s[i] != c && )
		{

		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**h;
	int		chek;

	chek = ft_check((char *)s, c);
	h = ft_calloc(chek * (strlen(s) - chek), sizeof (int));
	printf("%d", ft_check((char *)s, c));
	return (h);
}

int	main(void)
{
	char	i = 'l';
	char	s[] = "hello";

	ft_split(s, i);
	return (0);
}
