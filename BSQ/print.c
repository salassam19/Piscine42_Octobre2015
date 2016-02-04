/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/01 16:59:11 by salassam          #+#    #+#             */
/*   Updated: 2016/01/01 17:00:46 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		disp_bsq(char *file, t_max *max, int nb_lines, int nb_cols)
{
	char	*tmp;
	int		fd;
	int		i;

	i = 1;
	if ((nb_cols = go_first_line(file, &fd)) == -1)
		return (-1);
	if ((tmp = (char*)malloc(sizeof(char) * (nb_cols + 1))) == NULL)
		return (-1);
	tmp[nb_cols++] = 0;
	while (i <= nb_lines)
	{
		if ((read(fd, tmp, nb_cols)) < 0)
			return (-1);
		if (i++ <= max->y_max - max->size || i - 1 > max->y_max)
			write(1, tmp, nb_cols);
		else
			print_line(tmp, max, nb_cols);
	}
	free(tmp);
	return (fd);
}
