/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 05:36:34 by gypark            #+#    #+#             */
/*   Updated: 2020/10/04 06:08:13 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup_org;
	char	*dup;

	dup = malloc(ft_strlen(s) + 1);
	dup_org = dup;
	while (*s)
		*dup++ = *s++;
	*dup = 0;
	return (dup_org);
}
