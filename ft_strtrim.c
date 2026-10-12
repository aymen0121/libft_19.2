/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brouane <brouane@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:50:19 by brouane           #+#    #+#             */
/*   Updated: 2025/11/01 16:20:14 by brouane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find_set(const char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	char	*trim;
	int		end;
	int		i;

	end = ft_strlen(s1) - 1;
	start = 0;
	while (s1[start] && (ft_find_set(s1[start], set)))
		start++;
	while (end > start && (ft_find_set(s1[end], set)))
		end--;
	trim = malloc(sizeof(char) * ((end - start) + 2));
	if (!trim)
		return (NULL);
	i = 0;
	while (start <= end)
		trim[i++] = s1[start++];
	trim[i] = '\0';
	return (trim);
}
