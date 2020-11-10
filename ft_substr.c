/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 07:46:44 by gypark            #+#    #+#             */
/*   Updated: 2020/11/10 15:07:23 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*substr_org;

	if (start >= ft_strlen(s))
		return (ft_strdup("\0"));
	if (!(substr = malloc(len + 1)))
		return (0);
	substr_org = substr;
	s += start;
	while (len-- && *s)
		*substr++ = *s++;
	*substr = 0;
	return (substr_org);
}
