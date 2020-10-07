/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 06:14:12 by gypark            #+#    #+#             */
/*   Updated: 2020/10/07 17:03:55 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned	ft_abs(int n)
{
	return (n > 0 ? n : -n);
}

void			ft_putnbr_fd(int n, int fd)
{
	char		nbr[20];
	unsigned	un;
	int			i;

	un = ft_abs(n);
	i = 0;
	if (n < 0)
		ft_putchar_fd('-', fd);
	else if (n == 0)
		ft_putchar_fd('0', fd);
	while (un > 0)
	{
		nbr[i] = un % 10 + '0';
		un /= 10;
		i++;
	}
	while (i-- > 0)
		ft_putchar_fd(nbr[i], fd);
}
