/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 13:54:00 by fgabler           #+#    #+#             */
/*   Updated: 2023/03/30 19:02:29 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sublen(const char *s, char c, unsigned int start)
{
	unsigned int	len;
	unsigned int	i;

	i = 0;
	if (s[start + i] != c)
		len++;
	return (len);
}

static void	ft_allocate(const char *s, char c, char **ret)
{
	unsigned int	start;
	unsigned int	sublen;
	unsigned int	strlen;
	unsigned int	loc;
	unsigned int	len;

	loc = 0;
	len = ft_strlen(s);
	start = 0;
	while ((len--))
	{
		while (s[start] == c)
		{
			start++;
		}
		if (s[start] != c)
		{
			sublen = ft_sublen(s, c, start);
		}
		ret[loc] = ft_substr(s, start, sublen);
	}
}

static int	ft_getword(const char *s, char c)
{
	unsigned int	i;
	unsigned int	word;
	int				guard;

	i = 0;
	word = 0;
	guard = 0;
	while (s[i])
	{
		if (s[i] != c && guard == 0)
		{
			word++;
			guard = 1;
		}
		else if (s[i] == c && guard == 1)
		{
			guard = 0;
		}
		i++;
	}
	printf("%d", word);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char			**ret;
	unsigned int	i;

	ret = (char **) ft_calloc(ft_getword(s, c) + 1, sizeof (char **));
	if (!ret)
		return (NULL);
	i = 0;
	ft_allocate(s, c, ret);
	return (ret);
}
