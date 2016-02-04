/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 21:03:22 by salassam          #+#    #+#             */
/*   Updated: 2015/10/22 23:49:38 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rotate(char *str, int i, char *a, char *b)
{
	int j;
	int r;

	j = 0;
	r = 0;
	if (str[i] >= 65 && str[i] <= 90)
	{
		str[i] = str[i] + 32;
		r = 1;
	}
	while (a[j] != str[i] && j < 26)
		j++;
	if (r == 1)
	{
		str[i] = b[j] - 32;
		r = 0;
	}
	else
		str[i] = b[j];
}

char	*ft_rot42(char *str)
{
	int 	i;
	char 	*a;
	char 	*b;

	a = "abcdefghijklmnopqrstuvwxyz";
	b = "qrstuvwxyzabcdefghijklmnop";
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
			ft_rotate(str, i, a, b);
		i++;
	}
	return (str);
}

int	main()
{
	char str[] = "salim AsSAMeur";
	printf("%s", ft_rot42(str));
	return (0);
}
