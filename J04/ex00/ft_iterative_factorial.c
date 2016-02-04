/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 21:40:22 by salassam          #+#    #+#             */
/*   Updated: 2015/11/03 16:58:03 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int f;
	int i;

	if (nb >= 0 && nb <= 12)
	{
		f = 1;
		i = 1;
		while (i <= nb)
		{
			f *= i;
			i++;
		}
		return (f);
	}
	else
		return (0);
}
