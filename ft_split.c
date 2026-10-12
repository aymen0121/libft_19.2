/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brouane <brouane@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 22:49:07 by brouane           #+#    #+#             */
/*   Updated: 2026/07/28 15:00:00 by brouane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free_split(char **split, size_t count)
{
	while (count > 0)
		free(split[--count]);
	free(split);
	return (NULL);
}

static size_t	ft_word_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static size_t	ft_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	**ft_fill_split(char **split, char const *s, char c, size_t words)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		len = ft_word_len(s, c);
		split[i] = ft_substr(s, 0, len);
		if (!split[i])
			return (ft_free_split(split, i));
		s += len;
		i++;
	}
	split[i] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	words;

	if (!s)
		return (NULL);
	words = ft_word_count(s, c);
	split = malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	return (ft_fill_split(split, s, c, words));
}
