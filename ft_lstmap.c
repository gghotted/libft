/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 09:38:04 by gypark            #+#    #+#             */
/*   Updated: 2020/10/06 13:34:44 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(f)(void *), void (*del)(void *))
{
	t_list	*lst_new;
	t_list	*ele_new;

	lst_new = NULL;
	while (lst)
	{
		ele_new = ft_lstnew(f(lst->content));
		if (!ele_new)
		{
			ft_lstclear(&lst_new, del);
			break ;
		}
		ft_lstadd_back(&lst_new, ele_new);
		lst = lst->next;
	}
	return (lst_new);
}
