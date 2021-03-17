/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 03:50:02 by gypark            #+#    #+#             */
/*   Updated: 2021/03/17 23:10:45 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_reverse(const char *s)
{
	char	*new;
	int		len;

	len = ft_strlen(s);
	new = malloc(len + 1);
	if (!new)
		return (NULL);
	new[len] = 0;
	while (*s)
		new[len-- - 1] = *s++;
	return (new);
}

char			*ft_itoa(int n)
{
	unsigned	un;
	char		nbr[20];
	int			i;

	un = ft_abs(n);
	i = 0;
	while (un > 0)
	{
		nbr[i] = un % 10 + '0';
		un /= 10;
		i++;
	}
	if (n == 0)
		nbr[i++] = '0';
	else if (n < 0)
		nbr[i++] = '-';
	nbr[i] = 0;
	return (ft_reverse(nbr));
}
