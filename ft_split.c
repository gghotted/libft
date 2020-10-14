/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 10:40:12 by gypark            #+#    #+#             */
/*   Updated: 2020/10/14 13:06:05 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_count(char const *s, char c)
{
	int		cnt;
	char	*prev;
	char	*curr;

	if (!s || !*s)
		return (0);
	cnt = 0;
	prev = (char*)s - 1;
	while (*s)
	{
		if (*s == c)
		{
			curr = (char*)s;
			if (curr - prev - 1 > 0)
				cnt++;
			prev = curr;
		}
		s++;
	}
	if (s - curr - 1 > 0)
		cnt++;
	return (cnt);
}

static void		ft_free_words(char **words)
{
	while (!*words)
	{
		free(*words);
		words++;
	}
	free(words);
}

static char		**ft_find_nullptr(char **start, char **end)
{
	while (start <= end)
	{
		if (*start == 0)
			return (start);
		start++;
	}
	return (0);
}

char			**ft_check_ret(char **words_org, char **words)
{
	if (ft_find_nullptr(words_org, words - 1))
	{
		ft_free_words(words_org);
		return (0);
	}
	return (words_org);
}

char			**ft_split(char const *s, char c)
{
	char	**words;
	char	**words_org;
	char	*sep;

	if (!(words = malloc(sizeof(char*) * (ft_word_count(s, c) + 1))))
		return (0);
	words_org = words;
	sep = (char*)s;
	while (sep && *sep)
	{
		sep = ft_strchr(s, c);
		if (sep && *sep)
		{
			if (s != sep)
				*words++ = ft_substr(s, 0, sep - s);
			s = sep + 1;
		}
		else if (ft_strlen(s))
			*words++ = ft_strdup(s);
	}
	*words = 0;
	return (ft_check_ret(words_org, words));
}
