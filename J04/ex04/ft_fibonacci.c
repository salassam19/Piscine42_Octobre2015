/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 23:26:34 by salassam          #+#    #+#             */
/*   Updated: 2015/11/03 17:00:01 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int t;

	if (index == 1)
		return (1);
	else if (index < 0)
		return (-1);
	else if (index > 1)
	{
		t = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (t);
	}
	else
		return (0);
}
