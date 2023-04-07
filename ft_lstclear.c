/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:20:44 by fritzgabler       #+#    #+#             */
/*   Updated: 2023/04/07 11:45:14 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*curr;

	curr = *lst;
	if (lst)
	{
		while (*lst)
		{
			tmp = curr;
			curr = curr->next;
			del(tmp);
		}
		*lst = NULL;
	}
}
