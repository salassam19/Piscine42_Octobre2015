/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 19:32:35 by salassam          #+#    #+#             */
/*   Updated: 2015/12/26 12:02:54 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		len_ok(char *base)
{
	char	*ans;
	char	*n;

	ans = base - 1;
	while (*(++ans))
	{
		if (*base == '+' || *base == '-' || *base < '!' || *base > '~')
			return (0);
		n = base - 1;
		while (++n < ans)
			if (*n == *ans)
				return (0);
	}
	return (ans - base);
}

int		ft_atoi_base(char *str, char *base)
{
	int	b;

	b = len_ok(base);

}
