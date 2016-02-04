/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/01 16:58:45 by salassam          #+#    #+#             */
/*   Updated: 2016/01/01 16:58:47 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		minimum(unsigned int a, unsigned int b,
		unsigned int c)
{
	if (a <= b && a <= c)
		return (a);
	else if (b <= a && b <= c)
		return (b);
	else
		return (c);
}

void	swap_ptr(unsigned int **ptr1, unsigned int **ptr2)
{
	unsigned int	*swap;

	swap = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = swap;
}

int		save_max(t_max *max, int i, int line, int current)
{
	max->size = current;
	max->x_max = i + 1;
	max->y_max = line;
	return (current);
}

void	free_ptr(unsigned int **ptr1, unsigned int **ptr2, char **tmp)
{
	if (*ptr1)
		free(*ptr1);
	if (*ptr2)
		free(*ptr2);
	if (*tmp)
		free(*tmp);
}

int		get_nb_lines(int *fd, char *file)
{
	int		i;
	char	nb_lines[15];

	i = 0;
	if ((*fd = open(file, O_RDONLY)) == -1)
		return (-1);
	while (read(*fd, &nb_lines[i], 1) > 0 && nb_lines[i] != '\n' && i < 15)
		i = i + 1;
	if (i == 14)
		return (put_map_error());
	nb_lines[i] = 0;
	if (check_nb_lines(nb_lines) == -1 || i == 0)
	{
		close(*fd);
		return (-1);
	}
	return (ft_atoi(nb_lines));
}
