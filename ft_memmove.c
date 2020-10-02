/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 21:22:22 by gypark            #+#    #+#             */
/*   Updated: 2020/10/02 23:30:09 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest_org, const void *src_org, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;

	dest = (unsigned char*)dest_org;
	src = (unsigned char*)src_org;
	if (dest > src)
	{
		dest += n - 1;
		src += n - 1;
		while (n--)
			*dest-- = *src--;
	}
	else
		while (n--)
			*dest++ = *src++;
	return (dest_org);
}
