/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 19:33:14 by salassam          #+#    #+#             */
/*   Updated: 2015/11/03 20:29:23 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_puthexa(int nb)
{
	if (nb < 10)
		ft_putchar(nb + '0');
	else
		ft_putchar(nb + 'a' - 10);
}

void	print_address(int nb, int sz)
{
	if (sz == 0)
		return ;
	else
	{
		print_address(nb / 16, sz - 1);
		ft_puthexa(nb % 16);
	}
}

void	print_ascii(char *addr, int i, int size)
{
	int	j;

	j = 0;
	while (j < 16)
	{
		if (i + j < size)
			print_address(addr[i + j], 2);
		else
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		if (j % 2 == 1)
			ft_putchar(' ');
		j++;
	}
}

void	print_segment(char *addr, int i, int size)
{
	int	j;

	j = 0;
	while (j < 16 && i + j < size)
	{
		if (addr[i + j] < 32 || addr[i + j] == 127)
			ft_putchar('.');
		else
			ft_putchar(addr[i + j]);
		j++;
	}
	ft_putchar('\n');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		print_address(i, 10);
		ft_putchar(':');
		ft_putchar(' ');
		print_ascii(addr, i, size);
		print_segment(addr, i, size);
		i += 16;
	}
	return (addr);
}
