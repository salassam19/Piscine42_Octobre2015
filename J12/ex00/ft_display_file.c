/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/21 20:18:15 by salassam          #+#    #+#             */
/*   Updated: 2015/12/18 16:48:06 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_display_file(char *file)
{
	char	buf[BUF_SIZE + 1];
	int		len;
	int		fd;

	if ((fd = open(file, O_RDONLY)) == -1)
		return (1);
	while ((len = read(fd, buf, BUF_SIZE)) != 0)
	{
		buf[len] = '\0';
		ft_putstr(buf);
	}
	close(fd);
	return (0);
}
