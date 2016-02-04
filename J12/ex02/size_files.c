/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_files.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 21:26:23 by salassam          #+#    #+#             */
/*   Updated: 2015/12/18 21:29:20 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		size_files(char *file)
{
	int		fl;
	int		size;
	char	buf[2];

	size = 0;
	fl = open(file, O_RDONLY);
	while (read(fl, buf, 1))
		size++;
	close(fl);
	return (size);
}
