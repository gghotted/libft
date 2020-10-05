/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 11:18:59 by gypark            #+#    #+#             */
/*   Updated: 2020/10/05 12:40:13 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	long long	len_size;
	long long	len_dst;
	long long	len_src;
	long long	len_cat;

	len_size = (long long)size;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	len_cat = size - len_dst - 1;
	dst += len_dst;
	while (*src && len_cat-- > 0)
		*dst++ = *src++;
	*dst = 0;
	if (len_size - len_dst > 0)
		return (len_dst + len_src);
	return (len_size + len_src);
}
