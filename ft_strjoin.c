/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 07:53:55 by gypark            #+#    #+#             */
/*   Updated: 2020/10/04 08:03:23 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	str = calloc(ft_strlen(s1) + ft_strlen(s2) + 1, 1);
	if (!str)
		return (NULL);
	ft_strcat(str, s1);
	ft_strcat(str, s2);
	return (str);
}
