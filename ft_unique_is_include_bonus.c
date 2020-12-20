/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unique_is_include_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 19:03:38 by gypark            #+#    #+#             */
/*   Updated: 2020/11/25 19:15:47 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_unique_is_include(char *big, char *small)
{
	if (!ft_isunique(big) || !ft_isunique(small))
		return (0);
	while (*small)
		if (!ft_strchr(big, *(small++)))
			return (0);
	return (1);
}
