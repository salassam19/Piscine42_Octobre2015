/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 12:07:17 by salassam          #+#    #+#             */
/*   Updated: 2015/11/03 12:07:24 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	tem;
	int		nc;
	int		i;

	i = 0;
	nc = 0;
	while (str[nc])
		nc++;
	nc -= 1;
	while (i < nc)
	{
		tem = str[nc];
		str[nc] = str[i];
		str[i] = tem;
		i++;
		nc--;
	}
	return (str);
}
