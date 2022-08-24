/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:42:41 by alejandg          #+#    #+#             */
/*   Updated: 2022/08/21 15:02:47 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		if (str[i] == str[0] && str[i] <= 'a' && str[i] >= 'z')
		{
			str[i] = str[i] - 32;
		}
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& (str[i - 1] < '0'
				|| (str[i - 1] > '9' && str[i - 1] < 'A')
				|| (str[i - 1] > 'Z' && str[i - 1] < 'a')
				|| str[i - 1] > 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main()
// {
// char str[] = "5alut, comMent tu vas ? 
// 42mots quarante-deux; cinquante+et+un";
// 	printf("%s", ft_strcapitalize(str));
// } 
//CORREGIDO