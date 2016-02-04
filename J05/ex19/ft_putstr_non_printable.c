/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 19:32:53 by salassam          #+#    #+#             */
/*   Updated: 2015/12/11 23:42:33 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

void	put_hexa_char(int c)
{
	if (c < 10)
		ft_putchar(c + '0');
	else
		ft_putchar(c + 'a' - 10);
}

void	put_hexa_code(int c)
{
	if (c < 16)
		put_hexa_char(c);
	else
	{
		put_hexa_code(c / 16);
		put_hexa_char(c % 16);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			put_hexa_code(str[i]);
		}
		i++;
	}
}
