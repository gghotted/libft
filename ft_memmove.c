/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 21:22:22 by gypark            #+#    #+#             */
/*   Updated: 2020/10/02 22:14:18 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*dest_org;

	dest_org = dest;
	if (dest > src)
	{
		dest += n - 1;
		src += n - 1;
		while (n--)
			*(unsigned char*)dest-- = *(unsigned char*)src--;
	}
	else
		while (n--)
			*(unsigned char*)dest++ = *(unsigned char*)src++;
	return (dest_org);
}
