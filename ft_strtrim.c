/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 08:04:57 by gypark            #+#    #+#             */
/*   Updated: 2020/10/04 09:12:46 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;

	start = (char*)s1;
	end = (char*)s1 + ft_strlen(s1) - 1;
	while (start <= end && ft_isin((char*)set, *start))
		start++;
	while (end >= start && ft_isin((char*)set, *end))
		end--;
	return (ft_substr(start, 0, end - start + 1));
}
