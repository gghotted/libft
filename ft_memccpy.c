/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 22:28:26 by gypark            #+#    #+#             */
/*   Updated: 2020/10/03 00:00:25 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest_org, const void *src_org, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;

	dest = (unsigned char*)dest_org;
	src = (unsigned char*)src_org;
	while (n--)
	{
		*dest = *src;
		if (*src == (unsigned char)c)
			return (dest + 1);
		dest++;
		src++;
	}
	return (NULL);
}
