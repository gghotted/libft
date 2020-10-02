/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 02:05:58 by gypark            #+#    #+#             */
/*   Updated: 2020/10/03 00:01:13 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b_org, int c, size_t len)
{
	unsigned char	*b;

	b = (unsigned char*)b_org;
	while (len-- > 0)
		*b++ = (unsigned char)c;
	return (b_org);
}
