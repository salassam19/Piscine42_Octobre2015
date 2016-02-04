/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 16:53:11 by salassam          #+#    #+#             */
/*   Updated: 2015/10/28 10:48:45 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_alpha(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

int		ft_maj(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int		ft_min(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int space;

	i = 0;
	space = 0;
	while (str[i])
	{
		if ((ft_min(str[i])) && (space == 0))
			str[i] = str[i] - 32;
		else if ((ft_maj(str[i])) && (space == 1))
			str[i] = str[i] + 32;
		if (!(ft_alpha(str[i])))
			space = 0;
		else
			space = 1;
		i++;
	}
	return (str);
}
