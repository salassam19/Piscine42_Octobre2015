/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 19:31:39 by salassam          #+#    #+#             */
/*   Updated: 2015/11/03 20:28:43 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int de;

	i = 0;
	while (dest[i] && i < size)
		i++;
	de = i;
	while (src[i - de] && i < size - 1)
	{
		dest[i] = src[i - de];
		i++;
	}
	if (de < size)
		dest[i] = '\0';
	return (de + ft_strlen(src));
}
