/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 16:55:37 by salassam          #+#    #+#             */
/*   Updated: 2015/10/26 16:55:39 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	else
	{
		while (str[i])
		{
			if (str[i] < 32 || str[i] == 127)
				return (0);
			i++;
		}
		return (1);
	}
}
