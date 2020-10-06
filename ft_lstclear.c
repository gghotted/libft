/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 09:16:08 by gypark            #+#    #+#             */
/*   Updated: 2020/10/06 09:32:36 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*prev;
	t_list	*curr;

	curr = *lst;
	while (curr)
	{
		prev = curr;
		curr = curr->next;
		ft_lstdelone(prev, del);
	}
	*lst = NULL;
}
