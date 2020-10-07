/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 05:53:05 by gypark            #+#    #+#             */
/*   Updated: 2020/10/07 11:08:21 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*memory;

	memory = malloc(nelem * elsize);
	if (!memory)
		return (0);
	ft_memset(memory, 0, nelem * elsize);
	return (memory);
}
