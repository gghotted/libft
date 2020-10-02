/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 00:52:04 by gypark            #+#    #+#             */
/*   Updated: 2020/10/03 01:36:21 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_startwith(const char *str, const char *substr)
{
	while (*substr)
		if (*substr++ != *str++)
			return (0);
	return (1);
}

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	while (*str && len)
	{
		if (ft_startwith(str, substr) && ft_strlen(substr) <= len)
			return ((char*)str);
		len--;
		str++;
	}
	return (NULL);
}
