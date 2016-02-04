/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 20:38:32 by salassam          #+#    #+#             */
/*   Updated: 2015/11/02 20:38:34 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef int		(*t_s_opp)(int, int);

typedef struct	s_opp
{
	char	*c;
	t_s_opp	func;
}				t_opp;

int				ft_atoi(char *str);
int				ft_add(int a, int b);
int				ft_mul(int a, int b);
int				ft_sub(int a, int b);
int				ft_div(int a, int b);
int				ft_mod(int a, int b);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
int				ft_usage(int a, int b);

#endif
