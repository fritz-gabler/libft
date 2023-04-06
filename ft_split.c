/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fritzgabler <fritzgabler@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 13:54:00 by fgabler           #+#    #+#             */
/*   Updated: 2023/04/04 13:45:08 by fritzgabler      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sublen(const char *s, char c, unsigned int start)
{
	unsigned int	len;

	len = 0;
	while (s[start + len] != c)
		if (!ft_strchr(s, c))
			return (len = ft_strlen(s));
		len++;
	return (len);
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
	return (word);
}

static void	ft_free(char **ret, unsigned int freeit)
{
	while (ret[freeit])
		free ((void *)(ret[freeit++]));
	return ((void) NULL);
}

static void	ft_allocate(const char *s, char c, char **ret)
{
	unsigned int	start;
	unsigned int	sublen;
	unsigned int	loc;
	unsigned int	len;
	unsigned int	freeit;

	loc = 0;
	len = ft_getword(s, c);
	start = 0;
	freeit = 0;
	while ((len--))
	{
		while (s[start] == c)
		{
			start++;
		}
		if (s[start] != c)
			sublen = ft_sublen(s, c, start);
		ret[loc++] = ft_substr(s, start, sublen);
		if (!ret)
			ft_free(ret, freeit);
		if (s[start])
				start = start + sublen;
	}
}

char	**ft_split(char const *s, char c)
{
	char			**ret;

	ret = (char **)ft_calloc (ft_getword(s, c) + 1, sizeof (char *));
	if (!ret)
		return (NULL);
	ft_allocate(s, c, ret);
	return (ret);
}
