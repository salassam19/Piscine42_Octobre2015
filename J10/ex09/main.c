/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 20:38:50 by salassam          #+#    #+#             */
/*   Updated: 2015/11/02 20:38:51 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_opp.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_error(char **argv, char c)
{
	if (c == '/' && !ft_atoi(argv[3]))
		ft_putstr("Stop : division by zero\n");
	if (c == '%' && !ft_atoi(argv[3]))
		ft_putstr("Stop : modulo by zero\n");
	return (0);
}

int		ft_usage(int a, int b)
{
	a = 0;
	b = 0;
	ft_putstr("error : only [ - + * / % ] are accepted.");
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	char	c;

	if (argc != 4)
		return (0);
	c = argv[2][0];
	i = 0;
	if ((c == '/' || c == '%') && !ft_atoi(argv[3]))
		return (ft_error(argv, c));
	while (i < 5)
	{
		if (*g_opptab[i].c == c)
		{
			ft_putnbr(g_opptab[i].func(ft_atoi(argv[1]), ft_atoi(argv[3])));
			ft_putchar('\n');
			return (0);
		}
		i++;
	}
	g_opptab[5].func(ft_atoi(argv[1]), ft_atoi(argv[3]));
	ft_putchar('\n');
	return (0);
}
