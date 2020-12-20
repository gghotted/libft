/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isunique_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 19:06:23 by gypark            #+#    #+#             */
/*   Updated: 2020/11/25 19:10:58 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isunique(char *s)
{
	if (ft_strlen(s) <= 1)
		return (1);
	while (*s && *(s + 1))
	{
		if (ft_strchr(s + 1, *s))
			return (0);
		s++;
	}
	return (1);
}
