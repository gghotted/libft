/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:21:33 by gypark            #+#    #+#             */
/*   Updated: 2021/03/16 16:21:44 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_malloc(size_t size)
{
	void	*memory;

	memory = malloc(size);
	if (!memory)
	{
		ft_putendl_fd("Out of memory", STDERR_FILENO);
		exit(1);
	}
	return (memory);
}
