/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_contents_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 00:51:41 by gypark            #+#    #+#             */
/*   Updated: 2020/12/17 00:32:23 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	**ft_lst_contents(t_list *lst)
{
	void	**contents;
	void	**org;

	if (!(contents = malloc(sizeof(void*) * (ft_lstsize(lst) + 1))))
		return (0);
	org = contents;
	while (lst)
	{
		*contents++ = lst->content;
		lst = lst->next;
	}
	*contents = 0;
	return (org);
}
