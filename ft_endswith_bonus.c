/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_endswith_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 01:03:50 by gypark            #+#    #+#             */
/*   Updated: 2020/11/27 02:52:36 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_endswith(char *s, char *end)
{
	char	*start;
	size_t	s_len;
	size_t	end_len;

	s_len = ft_strlen(s);
	end_len = ft_strlen(end);
	if (s_len < end_len)
		return (0);
	start = s + (s_len - end_len);
	return (ft_strcmp(start, end) == 0);
}
