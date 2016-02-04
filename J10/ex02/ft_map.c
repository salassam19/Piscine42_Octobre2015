/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 10:13:44 by salassam          #+#    #+#             */
/*   Updated: 2015/11/06 10:13:49 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*tab1;
	int	i;

	i = 0;
	tab1 = (int*)malloc(sizeof(*tab) * length);
	while (i < length)
	{
		tab1[i] = f(tab[i]);
		i++;
	}
	return (tab1);
}
