/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 00:37:48 by gypark            #+#    #+#             */
/*   Updated: 2020/10/03 00:44:26 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*finded;

	finded = NULL;
	while (*s)
	{
		if (*s == c)
			finded = (char *)s;
		s++;
	}
	return (c == 0 ? (char *)s : finded);
}
