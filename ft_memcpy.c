/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 22:20:32 by gypark            #+#    #+#             */
/*   Updated: 2020/10/02 23:27:20 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest_org, const void *src_org, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;

	dest = (unsigned char*)dest_org;
	src = (unsigned char*)src_org;
	while (n--)
		*dest++ = *src++;
	return (dest_org);
}
