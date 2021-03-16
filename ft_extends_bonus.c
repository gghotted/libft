/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extends_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 02:35:30 by gypark            #+#    #+#             */
/*   Updated: 2021/03/17 02:35:37 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_extend(char **org, char *new)
{
	char	*extended;
	size_t	org_len;
	size_t	new_len;

	org_len = ft_strlen(*org);
	new_len = ft_strlen(new);
	if (!(extended = malloc(org_len + new_len + 1)))
		return (0);
	ft_strcpy(extended, *org);
	ft_strcpy(extended + org_len, new);
	free(*org);
	*org = extended;
	return (1);
}
