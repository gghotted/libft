/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 10:40:12 by gypark            #+#    #+#             */
/*   Updated: 2020/10/04 12:33:48 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count(char const *s, char c)
{
	int	cnt;

	cnt = 0;
	while (*s)
		if (*s++ == c)
			cnt++;
	return (cnt);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	char	**words_org;
	char	*sep;

	words = malloc(sizeof(char*) * (ft_count(s, c) + 2));
	words_org = words;
	sep = (char*)s;
	if (!words)
		return (NULL);
	while (sep)
	{
		sep = ft_strchr(s, c);
		if (sep)
		{
			if (s != sep)
				*words++ = ft_substr(s, 0, sep - s);
			s = sep + 1;
		}
		else if (ft_strlen(s))
			*words++ = ft_strdup(s);
	}
	*words = 0;
	return (words_org);
}
