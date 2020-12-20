/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_replace_contents_bonus.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 21:40:26 by gypark            #+#    #+#             */
/*   Updated: 2020/12/17 01:04:06 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_replace_contents(t_list *lst, void **conents)
{
	while (lst)
	{
		lst->content = *conents++;
		lst = lst->next;
	}
}
