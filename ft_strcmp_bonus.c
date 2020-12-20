/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 01:02:32 by gypark            #+#    #+#             */
/*   Updated: 2020/11/27 02:50:58 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*us1;
	unsigned char	*us2;

	us1 = (unsigned char*)s1;
	us2 = (unsigned char*)s2;
	while (*us1 && *us2)
	{
		if (*us1 != *us2)
			return (us1 - us2);
		us1++;
		us2++;
	}
	return (*us1 - *us2);
}
