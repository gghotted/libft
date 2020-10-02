/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 01:40:46 by gypark            #+#    #+#             */
/*   Updated: 2020/10/03 01:45:40 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*dest_org;

	dest_org = dest;
	dest += ft_strlen(dest);
	while (*src)
		*dest++ = *src++;
	*dest = 0;
	return (dest_org);
}
