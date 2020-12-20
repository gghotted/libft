/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unique_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:56:19 by gypark            #+#    #+#             */
/*   Updated: 2020/11/25 19:01:42 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_unique(char *s)
{
	char	tmp[128];
	size_t	i;

	i = 0;
	ft_bzero(&tmp[0], 128);
	while (*s)
	{
		if (!ft_strchr(tmp, *s))
			tmp[i++] = *s;
		s++;
	}
	return (ft_strdup(tmp));
}
