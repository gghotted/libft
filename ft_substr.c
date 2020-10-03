/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 07:46:44 by gypark            #+#    #+#             */
/*   Updated: 2020/10/04 07:52:37 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*substr_org;

	if (!(substr = malloc(len + 1)))
		return (NULL);
	substr_org = substr;
	s += start;
	while (len--)
		*substr++ = *s++;
	*substr = 0;
	return (substr_org);
}
