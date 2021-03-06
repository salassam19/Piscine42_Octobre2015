/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 19:32:00 by salassam          #+#    #+#             */
/*   Updated: 2015/11/03 20:28:51 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*cd;
	char			*cs;
	unsigned int	len;

	cd = dest;
	cs = src;
	len = size;
	if (len != 0)
	{
		while (--len != 0)
		{
			if ((*cd++ = *cs++) == '\0')
				break ;
		}
	}
	if (len == 0)
	{
		if (size != 0)
			*cd = '\0';
		while (*cs++)
			;
	}
	return (cs - src - 1);
}
