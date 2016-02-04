/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/21 15:15:47 by salassam          #+#    #+#             */
/*   Updated: 2015/11/26 16:26:59 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*list;

	if (*begin_list)
	{
		while ((*begin_list)->next)
		{
			list = *begin_list;
			*begin_list = (*begin_list)->next;
			free(list);
		}
	}
	*begin_list = NULL;
}
