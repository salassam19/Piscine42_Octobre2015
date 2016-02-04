/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/25 20:29:22 by salassam          #+#    #+#             */
/*   Updated: 2015/12/30 18:56:36 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	size;

	if (*s2 == '\0')
		return ((char *)s1);
	size = ft_strlen(s2);
	while (*s1)
	{
		if (ft_strncmp(s1, s2, size) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
