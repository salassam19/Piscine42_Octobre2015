/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 16:51:42 by salassam          #+#    #+#             */
/*   Updated: 2015/11/03 15:47:22 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (str[i])
	{
		if (str[i] == to_find[a])
		{
			while (to_find[a] == str[i + a] && to_find[a] != '\0')
			{
				a++;
			}
			if (to_find[a] == '\0')
				return (&str[i]);
			else
				a = 0;
		}
		i++;
	}
	return (0);
}
