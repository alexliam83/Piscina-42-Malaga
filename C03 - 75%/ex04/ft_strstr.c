/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:19:13 by alejandg          #+#    #+#             */
/*   Updated: 2022/08/23 09:43:19 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)

{
	int	x[2];

	x[0] = 0;
	x[1] = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[x[0]] != '\0')
	{
		x[1] = 0;
		while ((str[x[0] + x[1]] == to_find[x[1]])
			&& (str[x[0] + x[1]] != '\0'))
			x[1]++;
		if (to_find[x[1]] == '\0')
			return (str + x[0]);
		x[0]++;
	}
	return (0);
}

//int main()

// {

// char a[20] = "Amigomio";
// char b[10] = "mig";

// printf("%s", ft_strstr(a, b));
// printf("%c", '\n');
// printf("%s", strstr(a, b));
// }