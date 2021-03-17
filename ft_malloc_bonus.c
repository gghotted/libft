/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:21:33 by gypark            #+#    #+#             */
/*   Updated: 2021/03/17 23:50:19 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	exit_malloc_error(void)
{
	ft_putendl_fd("Out of memory", STDERR_FILENO);
	exit(1);
}

void	*ft_malloc(size_t size)
{
	void	*memory;

	memory = malloc(size);
	if (!memory)
		exit_malloc_error();
	return (memory);
}
