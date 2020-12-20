/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repeat_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 02:42:07 by gypark            #+#    #+#             */
/*   Updated: 2020/11/27 02:46:13 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_repeat(int c, size_t size)
{
	char	*s;

	if (size == 0)
		return (ft_strdup(""));
	if (!(s = malloc(size + 1)))
		return (0);
	ft_memset(s, c, size);
	s[size] = 0;
	return (s);
}
