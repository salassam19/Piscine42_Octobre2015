/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/01 16:56:55 by salassam          #+#    #+#             */
/*   Updated: 2016/01/01 16:56:57 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		get_nb_cols(char *file)
{
	int		fd;
	char	tmp;
	int		i;

	i = 0;
	if ((fd = open(file, O_RDONLY)) == -1)
		return (-1);
	while (read(fd, &tmp, 1) > 0 && tmp != '\n')
		continue ;
	while (read(fd, &tmp, 1) > 0 && tmp != '\n')
		i = i + 1;
	if ((close(fd)) == -1)
		return (-1);
	return (i);
}

int		go_first_line(char *file, int *fd)
{
	char	tmp;
	int		i;

	i = 0;
	tmp = 0;
	if ((*fd = open(file, O_RDONLY)) == -1)
		return (-1);
	while (read(*fd, &tmp, 1) > 0 && tmp != '\n')
		continue ;
	tmp = 0;
	while (read(*fd, &tmp, 1) > 0 && tmp != '\n')
		i = i + 1;
	if ((close(*fd)) == -1)
		return (-1);
	if ((*fd = open(file, O_RDONLY)) == -1)
		return (-1);
	tmp = 0;
	while (read(*fd, &tmp, 1) > 0 && tmp != '\n')
		continue ;
	return (i);
}
