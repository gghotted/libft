/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fte_putchar_repeat_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 04:45:41 by gypark            #+#    #+#             */
/*   Updated: 2021/03/19 05:14:57 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	fte_putchar_repeat(char c, int cnt)
{
	char	*buf;

	buf = ft_malloc(cnt);
	ft_memset(buf, c, cnt);
	write(STDOUT_FILENO, buf, cnt);
	free(buf);
}
