/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 21:35:15 by salassam          #+#    #+#             */
/*   Updated: 2015/12/18 21:38:11 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <errno.h>

# define BUF_SIZE 4096

int		ft_atoi(char *str);
int		ft_cat(char *file);
int		ft_tail(int sign, int tail, int size, char *file);
int		size_files(char *file);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_puterr(char *name, char *file, int no);

#endif
