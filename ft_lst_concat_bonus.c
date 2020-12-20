/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_concat_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 01:07:13 by gypark            #+#    #+#             */
/*   Updated: 2020/12/17 01:16:04 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_concat(t_list **dest, t_list *src)
{
	if (!*dest)
		*dest = src;
	else
		ft_lstlast(*dest)->next = src;
}
