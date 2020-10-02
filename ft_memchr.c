/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 23:37:29 by gypark            #+#    #+#             */
/*   Updated: 2020/10/02 23:57:56 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s_org, int c, size_t n)
{
	unsigned char	*s;

	s = (unsigned char*)s_org;
	while (n--)
	{
		if (*s == (unsigned char)c)
			return (s);
		s++;
	}
	return (NULL);
}
