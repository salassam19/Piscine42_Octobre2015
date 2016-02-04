/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 20:34:22 by salassam          #+#    #+#             */
/*   Updated: 2015/11/02 20:34:23 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_error(char **argv, char c)
{
	if (c == '/' && !ft_atoi(argv[3]))
		write(1, "Stop : division by zero\n", 24);
	if (c == '%' && !ft_atoi(argv[3]))
		write(1, "Stop : modulo by zero\n", 22);
	return (0);
}

int		main(int argc, char **argv)
{
	int						i;
	char					c;
	char const				*op = "+-*/%\0";
	t_op_functions const	f[] = {add, sub, mul, div, mod};

	if (argc != 4)
		return (0);
	c = argv[2][0];
	i = 0;
	if ((c == '/' || c == '%') && !ft_atoi(argv[3]))
		return (ft_error(argv, c));
	while (op[i])
	{
		if (op[i] == c)
		{
			ft_putnbr(f[i](ft_atoi(argv[1]), ft_atoi(argv[3])));
			ft_putchar('\n');
			return (0);
		}
		i++;
	}
	write(1, "0\n", 2);
	return (0);
}
