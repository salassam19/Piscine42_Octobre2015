/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 17:58:31 by salassam          #+#    #+#             */
/*   Updated: 2015/10/22 19:31:43 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int y;

	y = hour;
	if (hour > 12)
		y = hour % 12;
	if (hour == 0)
		y = 12;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if ((hour >= 1) && (hour < 11))
		printf("%d:00 A.M. AND %d:00 A.M.\n", y, (y + 1) % 12);
	else if (hour == 11)
		printf("11:00 A.M. AND 12:00 P.M.\n");
	else if (hour == 23)
		printf("11:00 P.M. AND 12:00 A.M.\n");
	else if ((hour == 00) || (hour == 24))
		printf("12:00 A.M. AND 1:00 A.M.\n");
	else if (hour == 12)
		printf("12:00 P.M. AND 1:00 A.M.\n");
	else
		printf("%d:00 P.M. AND %d:00 A.M.\n", y, (y + 1) % 12);
}
