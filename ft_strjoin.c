/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 07:53:55 by gypark            #+#    #+#             */
/*   Updated: 2020/10/07 17:56:59 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcat(char *dest, const char *src)
{
	char	*dest_org;

	dest_org = dest;
	dest += ft_strlen(dest);
	while (*src)
		*dest++ = *src++;
	*dest = 0;
	return (dest_org);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	*str = 0;
	ft_strcat(str, s1);
	ft_strcat(str, s2);
	return (str);
}
