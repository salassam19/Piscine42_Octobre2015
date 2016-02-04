/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/25 16:23:11 by salassam          #+#    #+#             */
/*   Updated: 2015/12/30 00:20:14 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*a;
	unsigned char	*b;
	unsigned char	x;

	if (dst && src)
	{
		i = 0;
		a = (unsigned char *)dst;
		b = (unsigned char *)src;
		x = (unsigned char)c;
		while (i < n)
		{
			*a = *b;
			if (*b == x)
				return ((void *)(a + 1));
			a++;
			b++;
			i++;
		}
	}
	return (NULL);
}
