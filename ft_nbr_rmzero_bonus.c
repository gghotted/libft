/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_rmzero_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 01:28:38 by gypark            #+#    #+#             */
/*   Updated: 2021/03/21 04:08:58 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_nbr_rmzero(char *nbr)
{
	int		r_idx;
	int		w_idx;

	r_idx = 0;
	w_idx = 0;
	if (!nbr)
		return (NULL);
	if (nbr[r_idx] == '-')
		nbr[w_idx++] = nbr[r_idx++];
	else if (nbr[r_idx] == '+')
		r_idx++;
	while (nbr[r_idx] == '0')
		r_idx++;
	if (r_idx > 0 && nbr[r_idx - 1] == '0' && nbr[r_idx] == '\0')
		r_idx--;
	ft_strcpy(&nbr[w_idx], &nbr[r_idx]);
	if (ft_strcmp(nbr, "-0") == 0)
		ft_strcpy(nbr, "0");
	return (nbr);
}
