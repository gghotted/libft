/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fte_itoa_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 23:46:13 by gypark            #+#    #+#             */
/*   Updated: 2021/03/17 23:51:30 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*fte_itoa(int n)
{
	char	*s;

	s = ft_itoa(n);
	if (!s)
		exit_malloc_error();
	return (s);
}
