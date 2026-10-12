/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brouane <brouane@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 22:10:51 by brouane           #+#    #+#             */
/*   Updated: 2026/07/28 15:00:00 by brouane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*last;
	unsigned char	uc;

	last = NULL;
	uc = (unsigned char)c;
	while (1)
	{
		if ((unsigned char)*s == uc)
			last = (char *)s;
		if (*s == '\0')
			break ;
		s++;
	}
	return (last);
}
